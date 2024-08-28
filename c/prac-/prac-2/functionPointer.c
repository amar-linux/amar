#include<stdio.h>


int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int mul(int a, int b)
{
    return (a*b);
}


int div(int a, int b)
{
    return (a/b);
}


int main(){

    int (*do_operation[4])(int, int) ={add, sub, div, mul};
    int a =0;
    int b=0;
    int choice =0;

   printf ("Enater a: ");
   scanf ("%d",&a);
   printf ("Enater b: ");
   scanf ("%d",&b);
   printf ("Enater choice : ");
   scanf ("%d",&choice);
   do_operation[choice](a,b);
}
