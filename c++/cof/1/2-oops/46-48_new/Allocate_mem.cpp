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

int main(){
    Animal *pAnimal = new Animal[10];  // if your mem allocation is something like this then 
    //delete pAnimal;    // delete will be called in similar fashion 
    // delete []pAnimal ;  this will say that entire array has been deleted.
    pAnimal[5].setName("George");
    pAnimal[5].speak();
    delete []pAnimal;

    char *pMem = new char[10000];
    delete []pMem;

   

}