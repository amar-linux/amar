#include<iostream>

using namespace std;

int main(){

    string passwd = "hello";

    cout << "Enter the password> "<< flush;
    string input;
    cin >> input;
    if (passwd == input ){
        cout << "Password accepted" << endl;
    }
    if (passwd != input){
        cout << "Access denied " << endl;
    }
}
