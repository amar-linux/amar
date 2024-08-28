#include<iostream>

using namespace std;

void doSomething(int n)
{
    if (n)
    {
        doSomething(n/10);
        cout << n%10 ;
    }
}

int main()
{
    doSomething(123456);
    return 0;

}
