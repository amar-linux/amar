#include<iostream>
#include"person.h"
#include<sstream>
using namespace std;



Person::Person(string name, int age)
{
    // "this" is a keyword that points to is apointer to the object created.
    this->name = name;
    this->age  = age;
    cout << "The memory location of person with name " << name << "is: " << this << endl;
}

string Person::toStr()
{
    stringstream ss;
    ss << " name is: " ;
    ss << name;
    ss << " And ge is: " ;
    ss << age;

    return ss.str();
    
}
