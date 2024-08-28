#include<iostream>
#include"Cat.h"

using namespace std;

void Cat::speak()
{
    if (happy)
    {
        cout << " Meowuuu !!" << endl;
    }
    else 
    {
        cout << "SSssshhh !!" << endl;
    }
}

void Cat::makeHappy()
{
    happy = true;
}
void Cat::makeSad()
{
    happy = false;
}
