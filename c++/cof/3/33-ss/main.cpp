#include<iostream>
#include<sstream>

using namespace std;

int main()
{

    string name = "AMAR";
    int age = 32;

    stringstream ss;

    ss << " My name is: ";
    ss << name;
    ss << "; and my age is: ";
    ss << age;

    cout << ss.str() << endl;

    return 0;

}
