#include"get_min_int.h"
#include<stdbool.h>
#include<stdlib.h>
#include<limits.h>


int get_min_int(int *array, int length, bool* error){
    if (length <=0 || array == NULL){
        if (error != NULL) *error = true;
        return 0;
    }
    int smallest = INT_MAX;
    for (int i=0; i < length; i++){
        if (array[i] < smallest){
            smallest = array[i];
        }
    }
    if (error != NULL) *error = false;
    return smallest;
}

