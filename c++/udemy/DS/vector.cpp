#include<iostream>
#include<cassert>

using namespace std;


// Create Class 
// Add your data in private section. array size 
//constructor just create memory
//destructot just free the memory.
//
class Vector{
private:
    int* arr = NULL;
    int size =0;
    int currentSize;

public:
    Vector(int size):size(size){
        if (size <0)
        {
            size = 1;
            currentSize =1;
        }
        currentSize = size;
            
        arr = new int[size]{};
    }
    ~Vector(){
        delete[] arr;
        arr= NULL;
    }
    void set(int index, int value);
    int get(int index);
    void print();
    int find(int value);
    void setBack(int value);
    void setFront(int value);
    void setSize(int size);
    void printSize();
    void back(int value);
    void printCurrentSize();
};
// we can set and get data using 
int Vector::get(int idx)
{
    assert(0 <= idx && idx < size);
    return arr[idx];

}


void Vector::back(int value)
{
    int *arr2 = arr;
    bool newCreated = false;
    if (size == currentSize)
    {
        arr2 = new int[size+1000];
        currentSize = currentSize +1000;
        newCreated = true;
    }

    for (int i=1; i < size+1; i++)
    {
        arr2[i] = arr[i-1];
    }
    arr2[0] = value;
    if(newCreated)
    {
        delete []arr;
        arr = arr2;
    }
    arr[0] = value;
    size = size +1;
}

void Vector::setBack(int value)
{
    int *arr2 = new int[size + 1];
    for (int i=1; i < size+1; i++)
    {
        arr2[i] = arr[i-1];
    }
    delete []arr;
    arr = arr2;

    arr[0] = value;
    
}


void Vector::setFront(int value)
{
    int *arr2 = new int[size + 1];
    for (int i=0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
    arr2[size] = value;
    delete []arr;
    arr = arr2;

    arr[size] = value;
    size = size+1;
}


void Vector::set(int idx, int val)
{
    assert(0 <= idx && idx < size);
    arr[idx] =val;
}

void Vector::print(){
    for (int i=0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void Vector::printSize()
{
    cout << " the sizxe of aaray is: " << size << endl;
}

int Vector::find(int value)
{
    for (int i=0; i < size ; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

void Vector::printCurrentSize()
{
    cout << "the current size is: " << currentSize << endl;
    cout << " the size of aaray is: " << size << endl;
}

int main()
{
    
    Vector v(10);   // createing a vector that will store 10 ints.

    for (int i=0; i< 10; i++)
    {
        v.set(i,i);
    }

    v.print();
    cout << v.find(5) << " " << v.find(55); // 5 and -1;
    cout << "***********" << endl;
    for (int i =0; i < 10000; i++)
    {
        v.setBack(i*2);
    }
    v.print();
    v.printCurrentSize();
}
