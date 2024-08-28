#include<stdio.h>

// this function takes the function pointer op and 
// int x and int y as an argument 
// op is function that takes 2 ints as an argument and returns 
// int .
//
int add (int a, int b){ return a + b; }
int mul (int a, int b){return a*b; }
int do_operation(int (*op)(int, int), int x, int y){
    return op(x,y);


}

int main(int argc, char **argv){

    int result = do_operation(add, 5,7);
    int result2 = do_operation(mul, 7,9);

    printf ("the sum is %d\n", result);
    printf ("the prod is %d\n", result2);

}
