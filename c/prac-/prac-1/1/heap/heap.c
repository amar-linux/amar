#include<stdio.h>
#include<stdlib.h>


#define MAX_SIZE 32



int parent(int i)
{
    return (i-1)/2;
}

int leftChild(int i)
{
    return (2*i +1);
}

int rightChild(int i)
{
    return (2*i +2);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}




// insert the item at the appropriate position
void insert(int a[], int data, int *n) {
    if (*n >= MAX_SIZE) {
        printf("%s\n", "The heap is full. Cannot insert");
        return;
    }
    // first insert the time at the last position of the array
    // and move it up
    a[*n] = data;
    *n = *n + 1;


    // move up until the heap property satisfies
    int i = *n - 1;
    while (i != 0 && a[parent(i)] < a[i]) {
        swap(&a[parent(i)], &a[i]);
        i = parent(i);
    }
}


void maxHeapify(int a[], int i, int n)
{
    int left = leftChild(i);
    int right = rightChild(i);

    int largest = i;

    if ( left <=n && a[left] > a[largest] )
    {
        largest = left;
    }
    if (right <=n && a[right] > a[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        maxHeapify(a, largest, n);
    }
}

// prints the heap
void printHeap(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    printf("\n");
}


void buildMaxHeap(int a[], int n)
{
    int i;
    for (i = n/2; i >=0; i--)
    {
        maxHeapify(a,i,n);
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

    insert(a,55,&n);
    insert(a,56,&n);
    insert(a,57,&n);
    insert(a,58,&n);
    insert(a,100,&n);


    printHeap(a,n);
}
