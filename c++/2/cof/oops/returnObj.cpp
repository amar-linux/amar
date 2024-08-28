#include<iostream>

using namespace std;

class Animal
{
private:
    string name;
public:
    Animal()
    {
        cout << "constructor called" << endl;
    }
    ~Animal()
    {
        cout << "destructor called" << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void speak()
    {
        cout << " my name is: " << name << endl;
    }
};


// the below code is not a good practoce cant return address of local variable ..
/*
Animal & createAnimal()
{
Animal a;
a.setName("Bertie");
return a;
}

*/


Animal *createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}
/*
Animal createAnimal()
{
    Animal animal1;
    animal1.setName("{Froggy}");
    return animal1;
}

*/

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;


}
