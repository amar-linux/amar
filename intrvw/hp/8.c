#include<stdio.h>

int a =5;

void fun2(){
    a = a+1;
    printf ("%d\n",a);
}


void fun(){
    
    static int a=7;
    a = a+1;
    printf ("%d\n", a);
}


int main(){
    fun();
    fun();
    fun();
    fun();

    fun2();
    fun2();
    fun2();
    fun2();
    
    int d =5;
    int e=6;
    int *ptr1 = &d;
    int *ptr2 = &e;
    int  ptr3 = ptr2 -ptr3;

}
