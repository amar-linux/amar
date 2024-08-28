#include<iostream>
#include"person.h"
#include<sstream>
using namespace std;


string Person::toStr()
{
    stringstream ss;
    ss << " name is: " ;
    ss << name;
    ss << " And ge is: " ;
    ss << age;

    return ss.str();
    
}
