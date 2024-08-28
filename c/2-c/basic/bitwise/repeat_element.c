#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>

bool check_bit(uint32_t* num, int pos){
  bool  check = false;
    if ( *num & (1 << pos) ){
        check = true;
    }
    return check;
}

void set_bit(uint32_t* num, int pos){
    *num = *num |= (1 << pos);
}


int main(){
    int arr[] =  {1,2,3,4,8,9,2,5,6,7,21,23,31,4,30,24,23,23,30,21,27,28,21};
    uint32_t num1 =0;
    uint32_t num2 =0;

    int len = sizeof(arr)/sizeof(arr[0]);

    printf ("The values that repeated are ..\n");
    for (int i =0; i < len; i++){
        if (check_bit(&num1, arr[i])){
            if (!(check_bit(&num2, arr[i]))){
              printf ("%d, ",arr[i]);
            }
            set_bit(&num2, arr[i]);

        }else{
            set_bit(&num1 , arr[i]);
        }
    }
    printf ("\n");
}
