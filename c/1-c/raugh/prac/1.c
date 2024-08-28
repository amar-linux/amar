
#include<stdio.h>
int main(){
    int a = 5;
    int c[] = {1,2,3,4,5};

    int len= sizeof(c)/sizeof(c[0]);

    for (int i=0; i< len; i++){
        printf ("%d, ",c[i]);
    }
}
