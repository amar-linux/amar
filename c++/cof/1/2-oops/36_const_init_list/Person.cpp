#include<iostream>
#include<sstream>
#include"person.h"

using namespace std;

Person::Person(): name("undefined"), age(0){
    
}

/*
Person::Person(string name, int age){   // constructor doesnt have a return type, constructor does not return anything.
    this->name = name;   // disambiguate between class name name and func name.
    this->age = age;    // this-> variavle wiil point to the ona that is in class , name is in fun argument.
}
*/

// instead of above code this is what you can use.

Person::Person(string name, int age): name(name), age(age){

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