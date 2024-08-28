#include<stdio.h>


int main(){

int ip;

int result = (ip & 0xff000000) >> 24;
if (result == 224){
    printf ("The ip is multicast ..\n")
}else{
    printf ("It is not multicats..\n");
}
}


// little 00001
// big    10000
int check (){
    int a =4;
    char *c = (char*)&a;
    if (*c){
        printf ("little endian..");
    }else {
        BIG endian.
    }
}
