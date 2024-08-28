#include<iostream>

using namespace std;

class Frog{
    private:
        string name;
    private:
        string getname(){return name;} // if it is needed just inside the block.

    public:
        Frog(string name):name(name){}  // list initializationn
        void info(){cout << "my name is: " << getname() << endl;}

};


int main(){

    Frog frog("freddy"); // we are calling teh constructot , constructor has to be public .
   // cout << frog.getname() << endl;
   // private methods can not be accesses outside the class, in another block.
    frog.info();

    return 0;
}
