#include<stdio.h>

#define MAX_SIZE 32



void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int parent (int i)
{
    return((i-1)/2);
}


int rightChild (int i)
{
    return (2*i + 1);
}

int leftChild(int i)
{
    return (2*i + 2);
}


void maxHeapify(int arr[], int i, int n){
    int left = leftChild(i);
    int right = rightChild(i);

    int largest = i;

    if (left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if (right <=n && arr[largest] < arr[right]){
        largest = right;
    }

    if (largest !=i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, largest, n);
    }
}


void buildMaxHeap(int arr[], int n)
{
    int i;

    for (i =n/2; i >=0; i--){
        maxHeapify(arr, i, n);
    }

}


void insert(int arr[],int data, int *n)
{

    if ((*n) >= MAX_SIZE)
    {
        printf ("Heap is full..\n");
        return;
    }
    arr[(*n)] = data;
    *n = *n+1;

    // move up until the propert is satisfied.
    int i = *n-1;
    while (i !=0 && arr[parent(i)] < arr[i])
    {

        swap (& arr[parent(i)], &arr[i]);
        i = parent(i);
    }
}


void printHeap(int arr[], int n){
    int i =0;


    for ( i=0; i < n; i++){
        printf ("%d, ", arr[i]);
    }
}


int main()
{
    int n =10;
    int a[32];

    a[0] = 10;
     a[1] =10;
     a[2] =12;
     a[3] =9;
     a[4] =78;
     a[5] =33;
     a[6] =21;
     a[7] =35;
     a[8] =29;
     a[9] =5;
     a[10]=66;

    buildMaxHeap(a,n);
//
//    insert(a,55,&n);
//    insert(a,56,&n);
//    insert(a,57,&n);
//    insert(a,58,&n);
//    insert(a,100,&n);
//

    printHeap(a,n);
}



