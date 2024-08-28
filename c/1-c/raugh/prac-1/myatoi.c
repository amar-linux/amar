#include<stdio.h>


int main(){

    char str[]="4567";
    int result =0;
    int i=0;

    while (str[i] != '\0'){
        result = result*10 + (str[i] - '0');
        i++;
    }
    printf ("%d\n", result);
}
