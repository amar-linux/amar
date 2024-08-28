#include<iostream>

using namespace std;

class Animal{
    public:
    void speak(){ cout << "Grrr" << endl;}
};
// sub classes are type of supre class. or a subset of super class.

class Cat:public Animal{
    public:
    void jump(){cout << " Cat is jumping.." << endl;}
};

// Animal is the super class of the cat and cat is the subclass of Animal.

class Tiger: public Cat{
    public:
    void attackAntelope(){cout << "Attacking" << endl;}
};

int main(){
    cout << "Helolo world...." << endl;
    Animal a;
    a.speak();
    Cat cat;
    cat.speak();

    cat.jump();  // we have given extra method jump to cat.

    cout << "tiger...." << endl;
    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.attackAntelope();
    return 0;
}