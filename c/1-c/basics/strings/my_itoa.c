#include<stdio.h>
#include<string.h>
void str_rev(char *c, int len){
    for(int i=0; i<len/2; i++){
        char temp = c[i];
        c[i] = c[len-1-i];
        c[len-i-1] = temp;
    }
    c[len]= '\0';
}

int main(){
    int a = 12345;
    int remainder;
    int dividend = a;
    char c[9] = {0}; 
    int i=0;

    while (dividend !=0){
        remainder = dividend % 10;
        dividend = dividend/10;
        c[i] = remainder + '0';
        i++;
    }
    printf ("length = %d and i = %d\n", strlen(c), i);
    str_rev(c, i);
    printf ("%s\n",c);
}
