#include<iostream>
#include<sstream>
#include"person.h"

using namespace std;


Person::Person(){
    name = "undefined";
    age =0;
}

string Person::toString(){
    stringstream ss;
    ss << "person's name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    string info = ss.str();
    return info;
}