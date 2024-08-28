#include<iostream>
using namespace std;
// this says that the function is implemented somewhere else.
//
void doSomething();


int main(){
    doSomething();
    doSomething();

}

void doSomething(){
     cout  << "Hello ... heade..." << endl;
}
