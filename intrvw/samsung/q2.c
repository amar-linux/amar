//1d array 


void fun(int *arr, int len, int k){
    int sum = k;

    for (int i=0; i< len; i++){
        for (int j=i+1; j< len; j++){
            if (((*(arr +i) + *(arr+j))== sum ){
                printf ("the pair is %d, %d and the sum is %d",*(arr+i),*(arr+j),sum);
            }

        
    }
}
}
