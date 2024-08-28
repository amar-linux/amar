


#include<iostream>

#include "cat.h"
using namespace std;


Cat::Cat()
{
    cout << "cat class created" << endl;
    happy = true;
}

Cat::~Cat()
{
    cout << "cat class destroyed" << endl;
}


void Cat::speak()
{
    if (happy)
    {
        cout << "meouw..." << endl;
    }
    else
    {
        cout << "ssshh..." << endl;
    }
}
