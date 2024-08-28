#include<iostream>

using namespace std;



class Animal
{
private:
    string name;
public:
    ~Animal(){cout << "destructor called"<< endl;};
    Animal(){cout << "constructor called" << endl;};
};
int main()
{
    Animal *pAnimal = new Animal[10];

    delete []pAnimal;

    char *pMem = new char[10000];

    char c = 'a';
    string name(5,c);
    cout << name << endl;

    delete[] pMem;

    return 0;

}
