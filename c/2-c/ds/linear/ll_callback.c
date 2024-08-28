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

}
