#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char *str = "Hello world";
    printf ("size of string is %lu and length is %lu\n",sizeof(str),strlen(str));
    char* str1 = malloc(sizeof(char)* strlen(str));
    printf ("size of string str1 is %lu and length str1 is %lu\n",sizeof(str),strlen(str));
    printf ("sizeof str1 is %lu",sizeof(str1));
    str1 = strncpy( str1,str, strlen(str)-4);
    str1[11] = 'A';
    printf ("%s\n",str1);

}
