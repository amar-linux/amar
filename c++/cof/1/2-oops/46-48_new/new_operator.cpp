

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
    Animal *pCat1 = new Animal();

    (*pCat1).setName("freddy");
    (*pCat1).speak();
    //When memory is allocated explicitly you have to delete it explicitly 
    // you have to delete the memory with delete memory.
    delete pCat1;
    Animal *pCat2 = NULL;

    cout << sizeof(pCat1) << endl;


/*
    Animal cat;
    cat.setName("Freddy");
    cat.speak();
    */
    return 0;
}
