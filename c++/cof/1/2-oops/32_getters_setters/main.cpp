#include<iostream>
#include"person.h"

using namespace std;

int main(){

    Person person;
    person.setName("Amar");
    cout << person.toString() << endl;

    cout << "The ma,e of the persom from get method is: " << person.getName() << endl;

    return 0;
}