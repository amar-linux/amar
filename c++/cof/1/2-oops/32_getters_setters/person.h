#ifndef _PERSON_H_
#define _PERSON_H_

#include<iostream>
using namespace std;

class Person{
private:
    string name;
public:
    Person();   // constructor.
    string toString();
    void setName(string newName);
    string getName();
};

#endif /* _PERSON_H_ */ 