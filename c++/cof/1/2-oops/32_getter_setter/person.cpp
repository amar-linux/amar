#include<iostream>
#include"person.h"
using namespace std;

string Person::tostring(){

    return "Person name is " + name;
}

Person::Person(){
    name = "george";
}

void Person::setName(string newName){
    name = newName;

}
string Person::getName(){
    return name;
}

