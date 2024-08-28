#include<iostream>

#include<assert.h>
using namespace std;

class Vector
{
private:
    int *arr = NULL;
    int size =0;
    int sizefilled =0;
    int capacity = size;
public:
    Vector(int size):size(size)
    {
        if (size ==0)
        {
            size =1;
        }
        arr = new int[size];
        
    }
    ~Vector()
    {
        delete[] arr;
    }
    int getIndex(int idx);
    void setIndex(int idx, int value);
    void print();
    int find(int value);
    void pushBack(int value);
    void pushFront(int value);
    void expandCapacity();
    void insert(int value, int index);
};


void Vector::insert(int value, int idx)
{
    assert (0 <=idx && idx < size);

    if (size == capacity)
    {
        expandCapacity();
    }
    // shift all the data to right first 


    for (int p = size-1; p >= idx; --p)
    {
        arr[p+1] = arr[p];
    }
    arr[idx] = value;
    ++size;
}

void swap(int **arr1, int **arr2)
{
    int *temp =*arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}

void Vector::expandCapacity()
{
    capacity *=2;
    int *arr2 = new int[capacity]{};
    for (int i=0; i<size; i++)
    {
        arr2[i] = arr[i];
    }
    swap (&arr, &arr2);
    delete []arr2;

}

void Vector::pushBack(int value)
{
    if (capacity == size)
    {
        expandCapacity();
    }
    arr[size++] = value;  // this is where valuse of size is changing. incrementing by 1 and its a global variable sort of.

    // above statement is equal to *++arr2 = value, gest assigned and then incremented.
    //cout << "the capacitynumber is:" << capacity << endl;
}

void Vector::print()
{
    for (int i=0; i < size; i++)
    {
        cout << getIndex(i) << ",\t";
    }
    cout << endl;
}

int Vector::find(int value)
{
    for (int i=0; i < size; i++)
    {
        if (getIndex(i) == value)
        {
            return i;
        }
        else 
        {
            return -1;
        }
    }
    return 0;

}

int Vector::getIndex(int idx)
{
    assert(0 <= idx && idx < size);
    return arr[idx];
}

void Vector::setIndex(int idx, int value)
{
    assert(0 <= idx && idx < size);
    arr[idx] = value;

}

int main()
{
    Vector v(2);

    v.setIndex(0,0);
    v.setIndex(1,1);
    v.setIndex(2,829);
    v.setIndex(4,928);

//    cout << "the value at index 4 is " << v.getIndex(4) << endl;

    cout << "\n\n" << endl;

    for (int i=0; i< 22; i++)
    {

        int p = i*3;
        v.pushBack(i*3);
        cout << p << "\t";
    }

    cout << endl;
    cout << endl;
    v.print();
    v.insert(832, 3);
    v.print();

}
