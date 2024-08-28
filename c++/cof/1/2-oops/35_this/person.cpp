#include<iostream>
#include<string>
#include<sstream>
#include"person.h"

using namespace std;

Person::Person(){
    age =0;
    name="";

}
Person::Person(string name, int age){
    this->name = name;  // this->name it refers to name in the class 
    // and just writing name will say that the name is the one that is closest.
    this->age = age;
    
}


string Person::toString(){
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "Age: ";
    ss << age;

    return ss.str();
}
