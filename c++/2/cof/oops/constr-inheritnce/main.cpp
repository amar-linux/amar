#include<iostream>

using namespace std;


class Machine
{
private:
    int id;
public:
    Machine():id(0){cout << "no argument constr called" << endl;}
    void info(){cout << "ID: " << id << endl;}
};

class Vehichle:public Machine
{
public:
    Vehichle(){cout << "Vehichle no argument contr called" << endl;}
    // we cannot initialize id here that is the private to machine , contr of machine can initialize whenever vehichle is created.
};
int main()
{

    Machine machine;
    Vehichle vehichle;  // both the contructor will get called , machine contstr and vehichle constr.
    vehichle.info();

    return 0;

}
