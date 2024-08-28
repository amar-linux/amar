

#include<iostream>
#include"person.h"

using namespace std;

Person::Person(){
    name = "george";
}

string Person::toString(){
    return "Person's name is: " + name; 

}

void Person::setName(string newName){
    name = newName;
}

string Person::getName(){
    return name;
}