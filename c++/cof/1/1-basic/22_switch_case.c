#include<stdio.h>


int main(){
    int val = 4;
    switch(val){
        case 1:
            printf ("The value is 1");
            break;
        case 2:
            printf ("The value is 2");
            continue;
        case 3:
            printf ("The value is 3");
            break;
        case 4:
            printf ("The value is 4");
            break;
        case 5:
            printf ("The value is 5");
            break;
        default:
            printf ("The value is default");
    }


    return 0;
}
