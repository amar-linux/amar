#include<stdio.h>
#include<string.h>
#define MAXLINE 50
/*
void reverse_string(char* s, int len){

    char temp;
    for (int i = 0; i <= len/2; i++){
        temp = s[len-1-i];
        s[len-1-i] = s[i];
        s[i] = temp;
    }
    printf ("Reversed string is %s\n", s);

}
void reverse_string2(char* s, int len){
    for (int i= 0, j = len-1; i<j; i++, j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

    }
}


void reverse_string3(char *s1, char*s2, size_t len){

    int i,j;
    for (i = len-1, j=0; i>=0; i--, j++){
        s2[j] = s1[i];
        
    }
    s2[j] = '\0';
}

*/

void reverse4 (char* str){
    char* end = str + strlen(str) -1;
    while (str < end){
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}
int main(){

    char s[] = "Helloo World";
    int len = strlen (s);
    printf ("Length of string is: %d\n", len); // will give number of characters 
    // to access the last element you have to len-1 as the array index starts f
    // from 0.
  //  printf ("size of string is: %lu\n", sizeof(s));
    printf ("original  string is %s\n", s);
   // reverse_string(s, len);
  // char s2[strlen(s)];
   // printf ("Reversed string is %s\n", s);
    reverse4(s);
    printf ("Reversed string is %s\n", s);
}
