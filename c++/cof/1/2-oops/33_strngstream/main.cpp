#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){
    string name = "bob";
    int age = 32;
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << ": age: ";
    ss << age;

  //  string info = "Name: " + name + " : age: " + age ;
   cout << ss.str() << endl;

  return 0; 
 }
