#include<iostream>
// find all the numbers divisble by 3 till a give number 
using namespace std;

int main()
{

    int end;
    cout << "enter the value till which we have to go:";
    cin >> end;

    int start = 1;

    while (start <= end)
    {
        if (start %3 ==0)
        {
            cout << start << ", " ;
        }
        start +=1;
    }
    cout << endl;
    return 0;

}
