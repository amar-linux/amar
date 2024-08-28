#include<iostream>
#include<assert.h>
using namespace std;


class Vector
{
private:
    int *arr = NULL;
    int size = 0;
public:
    Vector(int size):size(size){
        if (size == 0)
        {
            size =1;
        }
        //arr = (int*)malloc (size * sizeof(int));
        arr = new int[size];
    }
    ~Vector()
    {
        //free(arr);
        delete []arr;
        arr= NULL;

    }
    int get(int idx);
    void set(int value, int idx);
};


int Vector::get(int idx)
{
    assert(0 <= idx && idx < size);
    return arr[idx];
}

void Vector::set(int value, int idx)
{
    assert(0 <= idx && idx < size);
    arr[idx] = value;
}

int main()
{
    Vector v(5);
    v.set(1,1);
    return 0;


}
