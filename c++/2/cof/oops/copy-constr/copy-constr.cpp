#include<iostream>

using namespace std;

class Animal
{
private:
    string name;
public:
    Animal(){cout << "An animal got created .." << endl;};
    Animal(const Animal& other):name(other.name){cout << "animal got created using copy constructor."<< endl;};
    void speak(){cout <<"my name is: " << name << endl;};
    void setName(string name){this->name = name;};
};
int main()
{
    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();

   // Animal  animal2 = animal1;
   Animal animal2;
    animal2 = animal1;
    animal2.speak();

    animal1.setName("bob");
    Animal animal3(animal1);
    animal3.speak();



}
