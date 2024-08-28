#include<iostream>
#include"cat.h"
using namespace std;


// constructor ..
Cat::Cat(){     // this also has to be in definition in cat.h file 
    cout << "cat created " << endl;
    happy = true;
}

Cat::~Cat(){
    cout << " cat destroyed " << endl;
}

void Cat::speak(){
    if (happy){
        cout << "Meouwww!!!" << endl;    
    }else{
        cout << "Shhhh!!" << endl;
    }
}
