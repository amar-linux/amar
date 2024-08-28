#include<iostream>
//Power Function 
using namespace std;

int main()
{
    int num, pow;

    cout << " enter num and pow: ";
    cin >> num >> pow;

    int result = 1;

    while (pow >=1)
    {
        result *=num;
        pow--;
    }
    cout << result ;
    cout << endl;

    return 0;

}
