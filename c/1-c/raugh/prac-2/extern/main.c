#include<stdio.h>


    extern int multiplier;
int main(){
    int a=6;
    int b =7;
//    multiplier =6;

    int result = (sum (a,b))*multiplier;
    printf ("The result is %d\n", result);
}
