#include<stdio.h>


int main(){

    int a = 123456;

    // count the digits 
    int remainder=5;
    int count=0;
    int divisor =a;
    int modifier =1;
    while (divisor){
        divisor = divisor/10;
         modifier = modifier *10;
    }
    printf ("%d\n",count);

    divisor = a;
    int i =0;
    int result=0;
    while(divisor)
    {
        remainder = divisor%10;
        modifier = modifier/10;
        result = result + (remainder * modifier);
        printf ("%d\n", modifier);
        divisor = divisor/10;
        i++;
    }

    printf ("%d\n", result);

}
