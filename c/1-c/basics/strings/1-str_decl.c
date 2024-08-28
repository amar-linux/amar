#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){


    char str[]= "HelloWorld!\n";
    char *str1= "HelloWorld!\n";
    char str2[10] = {'h', 'e', 'l', 'l', 'o','\0'};
    char str3[] = "'h','e','l','l','l','\0'";

/*
    printf ("%s\n%s\n%s\n%s\n", str, str1, str2, str3);
    str[1] = 'A';
  //  str1[1] = 'A';
  str1 = str;
    str[1] = 'B';
    */
    char* str5 = malloc(20);
    
    strncpy(str5,"HelloWorld!",19 );
    printf ("Str5 = %s", str5);
    str5[0] = 'A';

    printf ("Str5 = %s", str5);


    char* str6 = "Hello World!";
    str6[0] = 'A'; // will give seg fault // this gets stored in read section of the 
   // printf ("Str6 = %s", str6);
    // memory .
        /*
    str2[1] = 'A';
    printf ("%s\n%s\n%s\n%s\n", str, str1, str2, str3);
    */
}
