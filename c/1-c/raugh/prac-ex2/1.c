#include<stdio.h>


void fun1(){
    static int a =10;
    a--;
    printf ("fun1 -- = %d\n, ",a);
}

void fun2(){
    static int a =10;
    a++;
    printf ("fun1 ++ = %d\n, ",a);
}
int main(){

    fun1();
    fun1();
    fun1();
    fun1();
    fun2();
}
