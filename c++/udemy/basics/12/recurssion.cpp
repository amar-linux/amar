#include<iostream>

//strat from a number n 
//if number is even next number in sequence is n/2 
//if odd next number is 3n+1
//if number is 1 end of sequence 
using namespace std;

void printSequence(int n)
{
    cout << n << " ";
    static int count = 0;
    count++;
    
    if (n ==1)
    {
        cout << "\n" << "the recurssion count is: " << count << endl;
        return;
    }
    else if (n%2 ==0)
    {
        printSequence(n/2);
    }
    else 
    {
        printSequence( 3*n + 1 );
    }
}


int main()
{
    printSequence(6);


}
