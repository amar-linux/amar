#include<stdio.h>


int main(){
    int a =1;

    char* c = (char*)&a;
    if (*c){
        printf ("Little Endian\n");
    }else{
        printf ("Big Endian..\n");
    }
}
