#include<iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    void setName(string name){this->name = name;};
//    void speak(){cout << "My name is: " << name << endl;};
// so if there is a method in which we dont intend thatt that method will change any instance data 
// we can simply dela]clare them as const.
// like 
    void const speak(){cout << " may name is :" << name << endl;};
};


int main(){
    //int value = 7;
    //const int value =7;   // now this is not a valrible rather a constant. this programm will not cahnge.
    // How i wish i could calculate pi.

    // we an use cinst for something that we know will not change.
    //like 
    const double pi = 3.141592;
    Animal animal;

    animal.setName("freddy");
    animal.speak();

    //value = 10;
    
     
    // different set 
    int *pValue;
    int number = 11;
    pValue = &number;
    *pValue = 12;

    // we can chnage the value of the pointer and we can also chnge the value pointer is pointing at.

    const int* pvalue = &value;

    cout << *pValue << endl;

    int number =12;
    pvalue = &number;  // works

    *pValue = 11; /// Error with this const int* pValue = &value.
    
    
     //  read it backward , pvalue is a pointer to an int which is constant.
    // value of pointer will be constant 

    int* const value =pValue;;// pointer to a constant value.
    *value =13;
    

    cout << " value is:  " << value << endl;


    return 0;
}