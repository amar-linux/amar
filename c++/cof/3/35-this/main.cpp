#include<iostream>
#include"person.h"
using namespace std;

int main()
{
    Person person1("sanjit", 43 );
    Person person2("Santosh",33);
    Person person3("Amar", 32);

    cout << "from constructor-1" << person1.toStr() << "and address of objest is: " << &person1 << endl; 
    cout << "from constructor-2" << person2.toStr() << "and address of objest is: " << &person2 << endl;
    cout << "from constructor-3" << person3.toStr() << "and address of objest is: " << &person3 << endl;

    return 0;

}
