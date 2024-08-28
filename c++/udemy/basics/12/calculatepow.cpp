#include<iostream>

using namespace std;

int calcultaePow(int number, int power)
{
    if (power == 1)
    {
        return number;
    }
    else
    {
        return (number * calcultaePow(number, power-1) );
    }
}

int main()
{
    int value = calcultaePow(7,3);
    cout << "the value is: " << value << endl;

}
