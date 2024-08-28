#include<iostream>
#include"person.h"
using namespace std;

int main(){

    Person person1;
    Person person2("Bob", 32);


    cout << person1.toString() << endl;
    cout << person2.toString() << endl;
}
