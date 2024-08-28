#include<iostream>
#include"Cat.h"

using namespace std;

Cat::Cat(){
    cout << "Cat got created " << endl;
    happy = false;
}
Cat::~Cat(){
    cout << "Cat destroyed " << endl;
}

void Cat::speak(){
    if (happy){
    cout << "Meouwww.." << endl;
    }else{
        cout << "sshhhshs" << endl;
    }
}
