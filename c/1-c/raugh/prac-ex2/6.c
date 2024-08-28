#include<stdio.h>

typedef int (*operation_ptr)(int,int); 



int add(int a, int b){return a+b;}
int mul(int a, int b){return a*b;}


int do_operation(int (*op)(int,int), int x, int y)
{
    return op(x,y);
}
// do operation is function that takes function pointer and two integeres as an argument 
// the function pointer if pointer to a function that takes two int as an argument.



int main(){
    int result = do_operation(add, 5,6);
    printf ("result = %d\n", result);
    result = do_operation(mul, 5,6);
    printf ("result = %d\n", result);

}
