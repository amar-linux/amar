#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char str[]= "123499";
    int carry =0;
    
    int len = strlen(str);
    printf ("%d\n", len);
    printf ("%d\n", sizeof(str));

    int i=0;

    int res = (str[len-1] -'0') +1;

    if (res <= 9){
        str[len -1] = res + '0';
        carry = 0;
    }else{
        str[len -1] = 0 + '0';
        carry =1;
    }
    for ( i = (len -2 -i) ; i > 0; i--){

        res = (str[i] - '0') + carry ;

    if (res <= 9){
        str[i] = res + '0';
        carry =0;
        break;
    }else{
        carry =1;
    }
    }
    printf ("the string is %s\n",str);
}

