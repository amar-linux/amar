#include<stdio.h>
#include<stdlib.h>

int max(int a, int b){
    return a > b ? a : b;
}

inline int two(){
    return 2;
}

int main(int argc, char** argv){
    int arg = atoi(argv[1]);
    int result;

    result = max(two(), arg);
    
    printf ("ret = %d\n",result);
    return 0;
}
