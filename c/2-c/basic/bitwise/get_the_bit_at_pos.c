#include<stdio.h>

#define GET_BIT(num,pos) ((num & (1 << pos))>> pos)


int main(){
    int num;
    printf ("Enter the number: ");
    scanf("%d",&num);

    int position =1;
    printf ("The bit is %d\n",GET_BIT(num, position));

    position =4;
    printf ("The bit is %d\n",GET_BIT(num, position));
}
