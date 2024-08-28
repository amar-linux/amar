#include<iostream>
#include"Cat.h"

using namespace std;

int main(){
    cout << "Starting the programm" << endl;
    {
        Cat bob;
        bob.speak();
    }
    /*
    Cat jim;
    jim.speak();
    */
    cout << "Ending the programm" << endl;

    return 0;
}
