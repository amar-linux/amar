#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string name ="Bob";
    int age = 32;
    stringstream ss;  // they are streams of data.

    ss << "Name is: ";
    ss << name;
    ss << "; Age is :";
    ss << age;

/*
    string info = "Name : " + name + "; age: " + age;  // e cannot concatenate a string with int.
    // to get around it we need string stream.
    cout << info << endl;
    */
    string info = ss.str();
    cout << info << endl;
}