#include<iostream>

using namespace std;


class Animal
{
private:
    string name;
public:
    Animal();
    ~Animal();
    void setName(string name);
    void speak();

};

int main()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Freddy");
    pAnimal->speak();
    delete pAnimal;

}
Animal::Animal()
{
    cout << "Animal got created"<< endl;
}

void Animal::setName(string name)
{
    this->name = name;
}

void Animal::speak()
{
    cout << "My name is: " << name << endl;
}

Animal::~Animal()
{

    cout << " animal destroyed" << endl;
}



