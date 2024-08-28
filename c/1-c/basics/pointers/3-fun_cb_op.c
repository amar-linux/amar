#include<stdio.h>
#include<math.h>

// by writting below line we defined  data type operation type 
// of a function pointer that points to a function.
// and takes in an integer value. 
//
// now we van write float calc function as 
// float calc (int num, op_t op);
//
typedef float (*op_t)(int);

float  cb_square(int num){
    return num*num;
}

float cb_cube(int num){
    return num*num*num;
}

float cb_square_root(int num){
    return num*num*num*num;
}

// this function takes inad and a function pointer as argument 
// the function type is that it takes int and returns int.
// finction pointer can be simplified using typedef key.
float calc(int num, op_t op){
//float calc(int num, float (*op)(int)){
    return op(num);
}

int main(){

    // now we can call calc function and do different operations 
    printf ("square: %.2f\n", calc(6, cb_square));
    printf ("square: %.2f\n", calc(6, cb_cube));
    printf ("square: %.2f\n", calc(6, cb_square_root));
     return 0;


}
