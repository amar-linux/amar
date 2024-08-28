#include<stdio.h>
#include<string.h>



int main(){

    char *str2 = "Amarjeet Singh is a good boy";
    char str1[16]= "Amarjeet is a good boy";
    str1[2] = 'X';
  //  str2[2] = 'X';
    printf ("%s\n", str1);
    printf ("%s\n", str2);
}
