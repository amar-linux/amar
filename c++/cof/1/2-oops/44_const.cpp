#include<iostream>


using namespace std;

class Animal{
    private:
        string name;

    public:
        void setName(string name){this->name = name;};
        // the methind that doesnot intend to vhange any instance variable 
        // its a good practice to declare them as const.
        void speak()const{cout << "My name is:" << name << endl;}
};


int main(){

    const double PI =  3.141592;
    int value =7;
    value =10;

    cout << PI << endl;

    Animal animal;
    animal.setName("freddy");
    animal.speak();

    return 0;
}
