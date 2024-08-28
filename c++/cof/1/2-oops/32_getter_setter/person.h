#ifndef PERSON_H_
#define PERSON_H_



#include<iostream>

using namespace std;

class Person{
    private:
        string name;

    public:
        Person();
        string tostring();
        string getName();
        void setName(string newname);
};


#endif /* PERSON_H_ */


