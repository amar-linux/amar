#include<stdio.h>
#include<stdlib.h>

char* myitoa(int b){

    int len=0;
    int num =b;
    int a = b;
    char* str = calloc(len,1);
    int i=0;
    int j=0;
    while (num !=0){
        len ++;
        num = (a >> i) & 0xf;
        i =i+4;
        printf ("%d\n",num);

    }
    printf ("%d\n", len);
    str[len] = '\0';
    a=b;
    num =b;
    i=0;

    while (num != 0){
        num = (a >> i) & 0xf;
        if (num ==0){
            return str;
        }
        printf ("%d\n",num);
        str[len -2 -j] = num + '0';
        i = i+4;
        j++;
    }
    
    return str;

}


int main(){

    int a = 0x45678;
    char *str = myitoa(a);
    printf ("%s\n", str);
}
