#include<stdio.h>
#include<stdlib.h>


int factorial(int a){
    if (a == 0){
        return 1;
    }else {
        return a * factorial(a-1);
    }
}

int main(int argc , char **argv){
    if (argc <= 1){
        printf ("No argument:\n");
        return 0;
    }

    int value = atoi(argv[1]);
    int result = factorial(value);
    printf ("result is: %d\n", result);
}
