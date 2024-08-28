#ifndef _PERSON_H_
#define _PERSON_H_

#include<iostream>
using namespace std;

class Person
{
private:
    int age;
    string name;
public:
    Person(){name = "undefined" ;age = 0;};
    Person(string newName){name = newName; age =0;};
    Person(string newName, int newAge){name = newName; age = newAge;};
    string toStr();
};




#endif
