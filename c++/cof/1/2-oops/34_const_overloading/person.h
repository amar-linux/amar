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
    Person(string newName){name = newName; age = 0;} ;  // you cane define the implementation of ur method here // this is called inline function.
     Person(string newName, int newAge ){name = newName; age = newAge;} ;  // you cane define the implementation of ur method here // this is called inline function.
    string toString();

};

#endif /* _PERSON_H_ */ 