#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 4096


char* str_rev(char* strb, char* stre){
    char *result = malloc(MAX);
   // char[len] = '\0';
    
    if (strb == NULL){
        return NULL;
    }
    if (strb == stre){
        return NULL;

    }
    char temp = *strb;
    char temp = *strb;
    *strb = *stre;
    *stre = temp;
    strb++;
    stre--;
    str_rev(strb, stre);
    return result;
    
}



int main(){

    char str[] = "Hello";
    int len = strlen(str);
    char *pstrb = str;
    char *pstre = str+len;
    char *str1 = str_rev(pstrb, pstre);
    str1[len] = '\0';
    printf ("%s\n", str1);
}
