#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float fvalue = 76.1234567890987654321;

    cout << sizeof(float) << endl;
    cout << fixed << fvalue << endl;
    cout << setprecision(20) << fixed << fvalue << endl;

    double dvalue = 76.1234567890987654321;

    cout << sizeof(dvalue) << endl;
    cout << setprecision(20) << fixed << dvalue << endl;

    long double lvalue = 76.1234567890987654321;

    cout << sizeof(lvalue) << endl;
    cout << setprecision(20) << fixed << lvalue << endl;

    return 0;
}
