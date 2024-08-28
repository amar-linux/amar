#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void string_rev(char *str, int i, int j){
    if (i >= j){
        return;
    }
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    string_rev(str,i+1, j-1);
}
int sum (int a, int b){
    return a+b;
}

int main(){

    char str[]= "Amarjeet";
    int i=0;
    int len = strlen(str);  // index 0-7 and strlen is 8.
    int j=len-1;
    string_rev(str, i,j);
    int d=sum (5++, 7++);
    printf ("sum = %d", d);
    printf ("%s\n", str);



}
