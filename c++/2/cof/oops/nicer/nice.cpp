#include<iostream>

using namespace std;

void changesomething(double &value)
{
    value = 1.414;
}


int main()
{

    int value1 = 8;
    int &value2 = value1;
    value2 =10;

    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;


    cout << endl;
    double value = 4.321;
    changesomething(value);
    cout << "value: " << value;


}
