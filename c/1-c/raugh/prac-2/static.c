#include<stdio.h>
void sum(int a, int b){
    static int result = 5;
    result++;
    printf ("result initialized as 5 %d\n", result);
}

void add (int a, int b){
    
    static int result = 15;
    result++;
    printf ("result initialized as 15 %d\n", result);
}


int main(){

    int a=5;
    int b=6;
    sum (a,b);
    add (a,b);
    sum (a,b);
    add (a,b);
}
