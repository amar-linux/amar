#include<iostream>

using namespace std;


class Frog
{
private:
    string name;
private:
    string getName(){return name;}
public:
    Frog(string name): name(name){}
    void info(){cout << "My name is: " << getName() << endl;}
};



int main()
{
    Frog frog("Freddy");
   // cout << frog.getName() << endl;
     frog.info();

    return 0;

}
