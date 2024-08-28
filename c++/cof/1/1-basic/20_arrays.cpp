#include<iostream>

using namespace std;

int main(){

    int value[3];
    value[0] = 4;
    //value[1] = 5;
    value[2] = 6;
    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    cout << value[0] << endl;
    cout << value[1] << endl;
    cout << value[2] << endl;

    // initialize the array 
    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};

    for (int i=0; i < 4; i++)
    {
        numbers[i] = 77;
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // initialize the value with zero 
    int numArray[8] ={};
    for (int i=0; i < 8; i++)
    {
        
        cout << "Element at index " << i << ": " << numArray[i] << endl;
    }

    


    return 0;
}

