#include<stdio.h>



int revInt(int num)
{
    int revNum =0;

    while (num >0)
    {
        revNum = revNum*10 +num%10;
        num = num/10;
    }
    return revNum;
}

int main(){
    int a  = 123456;
    int b = revInt(a);
    printf ("%d\n",b);
    return 0;
}
