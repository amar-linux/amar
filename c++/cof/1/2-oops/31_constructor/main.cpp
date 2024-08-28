#include<iostream>
#include"cat.h"

using namespace std;

int main(){
    cout << "Sttarting the programm ..." << endl;
    {
        Cat bob;
        bob.speak();
    }
    

    cout << "Ending The programm ..." << endl;
    return 0;


}