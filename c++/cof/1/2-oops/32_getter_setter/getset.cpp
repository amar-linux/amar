#include<iostream>
#include"person.h"
using namespace std;


int main(){
    Person jim;

    jim.setName("Georgina");
    cout << jim.tostring() << endl;

    cout << "name of the person with get method " << jim.getName() << endl;

    return 0;

}
