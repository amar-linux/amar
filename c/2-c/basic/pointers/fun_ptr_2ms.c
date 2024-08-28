#include<stdio.h>

int add(int a, int b){
    return a+b;

}

int main(){

    //pointer to function that should take 
    //(int, int) as argument and return int.
    int(*p)(int, int);
    //int *p (int, int) // is function that returns int*
    // now p can point to a function that is like add.
    p = add;
    int res = (*p)(2,3);
    //
    // dereferncing p will give the function itself.
}
