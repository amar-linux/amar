#include<stdio.h>
#include <math.h>


float cb_square(int num){
    return num*num;
}

float cb_cube(int num){
    return num*num*num;
}
/*
float cb_sqrt(int num){
    return sqrt(num);
}
*/
int calc(int num, float (*op)(int )){
    return op(num);
}


int main(){

    printf ("The value of square is %d\n",calc(9, cb_square));
    printf ("The value of square is %d\n",calc(9, cb_cube));
  //  printf ("The value of square is %d\n",calc(9, cb_sqrt));
    return 0;
}
