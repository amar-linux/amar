#include<iostream>

using namespace std;

class Animal{
    private:
    string name;
public:
    Animal(){cout << "Animal created " << endl;};
    Animal(const Animal& other): name(other.name){other.speak ();cout << "Animal created by copying " << endl;}; // copy constructor.
    void setname(string name){this->name = name;};
    void speak() {cout << "myname is: " << name << endl;}
};
int main(){
    

    Animal animal1;

    animal1.setname("freddy");
    
    
    Animal animal2 = animal1;
    animal2.speak();
        // cinstructor is not being called for the second one 
    // reson being we called copy constructor instead.
    animal2.setname("Bob");
    animal1.speak();
    animal2.speak();
    return 0;
}