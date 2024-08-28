#include<iostream>
#include<string>
#include<sstream>
#include"person.h"

using namespace std;

Person::Person(): name(""), age(0){


}
// this is another way of initilizing it with array the value inside () will be the value the name 
// will be initialized with.
Person::Person(string name, int age): name(name), age(age){
    
}


string Person::toString(){
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "Age: ";
    ss << age;

    return ss.str();
}
