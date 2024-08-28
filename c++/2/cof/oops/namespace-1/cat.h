
#ifndef _CAT_H_
#define _CAT_H_ 

#include<iostream>
using namespace std;

namespace cats
{
    const string CATNAME = "cat-freddy";
    class Cat
    {
    private:
        string name = "meouw..";
    public: 
        void speak();
    };
}

#endif
