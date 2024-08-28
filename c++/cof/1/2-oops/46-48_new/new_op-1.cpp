// You want to return an object from the function.

#include<iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal(){
        cout << "Animal Created " << endl;
    }
    Animal(const Animal& other):
    name(other.name){
        cout << "Animal created by copying." << endl;
    }
    ~Animal(){
        cout << "destructor called " << endl;
    }
    void setName(string name){
        this->name = name;
    }
    void speak(){
        cout << "my name is: " << name << endl;
    }
};

Animal *createAnimal(){
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    //Animal a; // this will be copied to the temp object. for making the return value.
   // a.setName("Bertie");
    return pAnimal;
}
// returning a refernce to local variable is not a good idea .
int main(){
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete(pFrog);
    return 0;
    
}
