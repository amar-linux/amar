#include<iostream>
#include"cat.h"
using namespace std;


void Cat::speak(){
    if (happy){
        cout << "Meouwww!!!" << endl;
    }else{
        cout << "Prrrrr!!" << endl;
    }
}

void Cat::makehappy(){
    happy = true;
}

void Cat::makesad(){
    happy = false;
}
