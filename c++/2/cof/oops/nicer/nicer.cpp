#include<iostream>

using namespace std;

int main()
{
    int value1 =8;
    int &value2 = value1;   // this sort of declaration means 
    // value2 is the refernce to the value1 value2 is just another variable refrencing the value1
    value2 =10;

    cout << "value1: " << value1;
    cout << "value2: " << value2;


}
