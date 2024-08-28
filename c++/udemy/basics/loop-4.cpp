#include<iostream>
// a programm to fetch t number and for every number enterd print the value of sum 0 to n 
using namespace std;

int main()
{

    int T;
    cout << "enter T: ";
    cin >> T; 

    int num =0;
    int sum;
    while (T)
    {
        cout << "Enter the number: ";
        cin >> num;
        sum =0;
        int i =0;
        while (i < num )
        {
            i++;
            sum +=i;

        }
        cout << "The sum is: " << sum;
        cout << endl;
        T--;
    }

    return 0;

}
