#include<iostream>
#include"person.h"
using namespace std;

int main()
{
    Person person1;
    Person person2("AMAR");
    Person person3("Amar", 32);

    cout << "from constructor-1" << person1.toStr() << endl;
    cout << "from constructor-2" << person2.toStr() << endl;
    cout << "from constructor-3" << person3.toStr() << endl;

    return 0;

}
