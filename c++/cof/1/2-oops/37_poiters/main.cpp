#include<iostream>

using namespace std;

int main(){

    int nValue =8;
    int* pnValue = &nValue;

    cout << " int value: " << nValue << endl;
    cout << "Poiter to int address: " << pnValue << endl;
    cout << "Int value via pointer: " << *pnValue << endl;

    return 0;
}
