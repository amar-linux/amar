#include<stdio.h>
#include <unistd.h>



int fun3(){
    sleep(100);
    return 4;
}

int fun2(){
    int a;
    a = fun3();
    return a-1;
}

int fun1(){
    int a;
    a = fun2();
    return a-1;
}

int main(){

    int a;
    a = fun1();
    printf ("main %d\n", a);
}
