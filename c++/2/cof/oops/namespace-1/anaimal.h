#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include<iostream>
using namespace std;

namespace animals
{
    const string CATNAME = "animal-freddy";
    class Cat
    {
    private:
        string name = "meouw..";
    public: 
        void speak();
    };
}

#endif
