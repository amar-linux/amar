#include<stdio.h>
#define OPS 4


int sum (int a, int b){return (a+b);}
int sub (int a, int b){return (a-b);}
int mul (int a, int b){return (a*b);}
int div (int a, int b){return (a/b);}



int main(){

    int a, b;
    int choice;
    // pointer to array of functions, function that returns int and takes two int as argument
    // and have intialized the array with the 4 function addresses 
    
    // initialization of array 
    int (*ptrfunc[OPS])(int a, int b)={sum, sub, mul, div};

    printf ("ennter the choice ..0-add, 1- sub, 2-mul , 3- div: ");
    scanf("%d",&choice);
    printf ("enter the two numbers ...:");
    scanf ("%d %d", &a, &b);
    printf ("the return is \n");
    printf ( "%d is ",ptrfunc[choice](a,b));



}
