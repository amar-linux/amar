#include<iostream>

using namespace std;



void calculatePow(int num, int exp)
{
    static int count = 0;
    if (num < exp)
    {
        cout << "the pow is: " << count << endl;
        return;
    }
    else
    {
        count++;
        calculatePow(num/exp, exp);
    }

}


int main()
{
    int number;
    int exponent;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the exponent: ";
    cin >> exponent;

    calculatePow(number,exponent);

}
