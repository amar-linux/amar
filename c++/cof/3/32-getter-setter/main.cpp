#include<iostream>
#include"person.h"

using namespace std;

int main()
{
    Person person;
    
    cout << person.toString() << endl;

    person.setName("Amar");

    cout << person.getName() << endl;

    return 0;

}
