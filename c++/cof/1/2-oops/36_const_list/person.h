

#include<iostream>
using namespace std;
#ifndef PERSON_H_
#define PERSON_H_


class Person{
    private:
        string name;
        int age;
    public:
        Person();
        Person(string name, int age);
        string toString();

};

#endif /* PERSON_H_ */
