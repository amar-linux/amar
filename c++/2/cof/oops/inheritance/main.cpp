#include<iostream>

using namespace std;

class Animal{
public:
    void speak(){cout << "grr.." << endl;}
};

// class cat is the subclass of animal
// and is inherited from animal 
// animal is the sperclass 
class Cat:public Animal{
public:
    void jump(){cout << " Cat jumping.." << endl;}

};

class Tiger:public Cat
{
public:
    void attack(){cout << "attacking.." << endl;}
};

int main()
{
    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump();
    // cat.attack();   // this will not work , cat does not know anything abt tiger.

    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.attack();

    return 0;

}
