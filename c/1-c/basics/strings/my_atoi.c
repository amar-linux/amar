#include<stdio.h>
#include<stdlib.h>


int main(){
    int i=0;
    int result = 0;

    char c[9] = "456";

    while (c[i] !='\0'){
        result = result*10 + (c[i]- '0');
        printf ("resulttemp= %d\n", result);
        i++;
    }
    printf ("the number is %d\n", result);
}
