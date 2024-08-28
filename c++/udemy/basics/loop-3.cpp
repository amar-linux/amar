#include<iostream>
//count the number of digits in a number 
using namespace std;

int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;
    int digit=0;

    if (num ==0)
    {
        digit =1;
    }
    else 
    {
       while (num > 0)
       {
           num /=10;
           digit++;
       }

    }
    cout << "number of digits is:" << digit;
    cout << endl;
    return 0;

}
