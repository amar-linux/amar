#include<iostream>

using namespace std;

int main (){
    int nValue = 8;
    cout << "Int value: " << nValue << endl;
    int *pValue = &nValue;
    *pValue = 10;
    cout << "Int value: " << nValue << endl;
    
    return 0;
}