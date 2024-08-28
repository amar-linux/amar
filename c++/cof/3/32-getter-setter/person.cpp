#include<iostream>
#include"person.h"
using namespace std;

Person::Person()
{
    name = "Singh";
}

string Person::toString()
{
    return "the name from const is: " + name; 
}

void Person::setName(string newName)
{
    cout << "setting name" << endl;
    name = newName;
}

string Person::getName()
{
    cout << "getting name: " << endl;
    return "name of the person from get method is: " + name ;
}

