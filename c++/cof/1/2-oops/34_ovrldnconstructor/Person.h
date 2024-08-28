#include<iostream>
using namespace std;

#ifndef PERSON_H_
#define Person_H_


class Person{
    private:
        string name;
        int age;
    public:
        Person();
        Person(string newName){name = newName ; age = 0;};
        Person (string newname, int age);
        string toString();

};


#endif /* PERSON_H_ */


