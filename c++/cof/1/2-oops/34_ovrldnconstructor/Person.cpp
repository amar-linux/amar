#include"Person.h"
#include<sstream>
#include<string>

using namespace std;

Person::Person(){
    // TODO
    name = "undefined";
    age =0;
}

Person::Person(string newname, int newage){
    name = newname;
    age = newage;
}


string Person::toString(){
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age ;

    return ss.str();
}
