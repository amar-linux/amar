#include<iostream>

using namespace std;

int factorial(int n)
{
    cout << "Function Call: n = " << n << endl;

   if (n ==1)
   {
       return 1;
   } 
   return factorial(n-1)*n;
}

int main()
{

    int value = factorial(6);
    cout << "the value is: " << value << endl;


}
