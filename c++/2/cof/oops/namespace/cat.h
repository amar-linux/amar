#include<iostream>

using namespace std;

#ifndef _CAT_H_
#define _CAT_H_

namespace animals{

const string CATNAME = "animalCatname";

class Cat
{
private:
    string name;
public:
    void speak();
};
};


#endif
