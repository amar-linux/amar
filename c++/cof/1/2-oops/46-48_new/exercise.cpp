
#include<iostream>

using namespace std;

class person{
private: 
    char name;
public:
    void setName(char name ){this->name = name;};
    void talk(){cout << " my name is: " << name <<  endl;};
};

int main(){

    person *Person = new person[26];
  cout << int ('0') << endl;   //converting int to string.

 

    for (int i=0; i <26; i++){
        char c = char (113 +i - '0');
        Person[i].setName(c);
    }

    for (int i=0; i< 26; i++){
        Person[i].talk();
    }

}