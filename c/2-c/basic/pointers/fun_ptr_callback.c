#include<stdio.h>

void fun(){
    printf ("Hello Callback...\n");
}
    

void B(void (*fun)()){
    fun();
}

int main(){

    void (*p)() =fun;
    B(p);

    // instead of top ywo lines we could also write 
    // B(fun);
    // which would mean same 
    // using fun would return address of fun .
}
