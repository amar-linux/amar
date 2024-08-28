#include<iostream>


using namespace std;

int main(){

    const string password = "hello";
    string input;

    do {
        cout << "Enter the password: " << flush;
        cin >> input;
        if (password != input){
            cout << "Access denied !" << endl;
        }
    }while (password != input);
    cout << "Password accepted !" << endl;

    
    return 0;
}
