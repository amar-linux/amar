#include<stdio.h>

int add(int a, int b){
    int sum = a+b;
    return sum;

}


int main(){
    int (*p)(int, int); // decalaration of a function pointer p
    // which takes two ints as an argument and returns int
    p = &add;
    int sum = (*p)(5,6); // or int sum = p(5,6)
    // name of function would return address to the function.
    printf ("%d\n", sum);

}
