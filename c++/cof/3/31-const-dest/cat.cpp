#include<iostream>
#include"cat.h"
using namespace std;


void Cat::speak()
{
    if (happy)
    {
        cout << "meouwww.." << endl;
    }
    else
    {
        cout << "sssshhhh ..." << endl;
    }
}

Cat::Cat()
{
    cout << "Cat object created ..." << endl;
    happy = true;
}


Cat::~Cat()
{
    cout << "Cat object destroyed ..." << endl;
}
