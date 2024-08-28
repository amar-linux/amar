#include<iostream>
#include"Person.h"
using namespace std;

int main(){

    Person person1;    // 1st consytructor is being used.
    Person person2("bob"); // second constructor will be used i
    Person person3("Amar",32); // second constructor will be used i
    // construct that takes parameter.. 

    cout << person1.toString() << endl; 
    cout << person2.toString() << endl; 
    cout << person3.toString() << endl; 

    return 0;
}
