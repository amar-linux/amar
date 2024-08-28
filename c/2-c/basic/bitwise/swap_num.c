#include<stdio.h>

void swap_the_number(int *a, int *b){
    if (a == b){
        return;
    }
    printf (" the value of a is %lu\n",a);
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}


int main(){
    int x = 20;
    int y = 40;

    swap_the_number(&x,&y);


    printf ("x20 = %d and y40= %d\n", x, y);

}
