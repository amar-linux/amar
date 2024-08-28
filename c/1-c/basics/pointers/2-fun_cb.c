#include<stdio.h>

void a(){
    printf("Hello CB\n");

}

void b (void(*ptr)()){ // function pointer as an argument .
    // ptr is a function pointer that takes no argument and returns no 
    // argument.
    ptr(); // call back function that ptr points to.


}

int main(){

    b(a);
    // we are calling finction b passing the address of function a.
    // ptr now points to function and and when we do ptr(
    // ee are saying that a();
    //
    // )
}
