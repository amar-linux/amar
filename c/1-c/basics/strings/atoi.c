#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int myatoi(char *str){
    int res =0;
    while(*str !='\0'){
        res = res*10 + *str - '0';
        printf ("%d\n",res);
        str++;
    }
    return res;

}
int main(){

    char *str = "546789";
    int a = myatoi(str);
    printf ("%d\n", a);
}
