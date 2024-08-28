#include<stdio.h>
#include<stdbool.h>



typedef struct index{
    int a; 
    int b;
}index;


index array[9];

void add(int i, int j){
    static int counter=0;
    array[counter].a =i;
    array[counter].b =j;
    counter++;
}

int is_index_valid(int m, int n, int len){

    if ( m < 0 || m > len-1 || n < 0 || n > len-1){
        return 0;
    }for (int i=0; i < 9; i++){
        if (m == array[i].a && n == array[i].b){
            return 0;
        }
    }
    return 1;

}

void is_path_valid(int a[3][3],int size ){
    
    int i=0;
    int j=0;
    int len =3;
    int n = size;

    while (!(i == n-1) && !(j==n-1)){
        if (a[i][j] == 'r'){
            j = j+1;
            if (is_index_valid(i,j,len)){
                add(i,j);
            }else{
                printf("path is invalid...\n");
                return;
            }
        }else if (a[i][j] == 'l'){
            j = j-1;
            if (is_index_valid(i,j,len)){
                add(i,j);
            }else{
                printf ("Path is invalid...\n");
                return;
            }
        }else if (a[i][j] == 'u'){
            i = i-1;
            if (is_index_valid(i,j,len)){
                add(i,j);
            }else {
                printf ("Path is invalid...\n");
                return;

            }
        }else if (a[i][j] == 'd'){
            i = 1+i;
            if (is_index_valid(i,j,len)){
                add(i,j);
            }else{
                printf ("Path is invalid\n");
                return;
            }
        }
    }
    printf ("Path is valid..\n");

}



#define I_SIZE 9
#define SIZE 3

int main(){
    int size = 3;
   // int i_size = 9;
    char input_arr[I_SIZE] = {'r','l','u','r','r','d','l','d','l'};

    int k=0;

    int arr[SIZE][SIZE];
    for (int i=0; i< size; i++){
        for (int j=0; j< size; j++){
            arr[i][j] = input_arr[k];
            k++;
        }
    }
    is_path_valid(arr, size);

}
