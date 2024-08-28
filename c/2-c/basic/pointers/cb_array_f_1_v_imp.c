#include<stdio.h>

typedef float (*func_to_ptr)(float, float);


float sum(float a, float b){ return (a+b); }
float sub(float a, float b){ return (a-b); }
float mul(float a, float b){ return (a*b); }
float div(float a, float b){ return (a/b); }



int main(){

    int choice;
    float a, b;
    // we have to declare array of function pointers 
 //   func_to_ptr my_cb[]= {sum, sub, mul, div};
     float (*funcptr[])(float, float)= {sum, sub, mul, div};

    printf ("Enter the choice: ");
    scanf ("%d",&choice);
    printf ("Enter the numbers..");
    scanf("%f %f",&a, &b);
   // printf ("%f", my_cb[choice](a,b));
    printf ("%f", funcptr[choice](a,b));

}
