#ifndef _PERSON_H_
#define _PERSON_H_

#include<iostream>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person();   // constructor.
    Person(string newName, int newAge );  // constructor.
    string toString();

};

#endif /* _PERSON_H_ */ 