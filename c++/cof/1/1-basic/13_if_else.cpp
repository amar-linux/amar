#include<iostream>

using namespace std;

int main(){

    cout << "1.Add New Record." << endl;
    cout << "2.Delete New Record." << endl;
    cout << "3.View New Record." << endl;
    cout << "4.Search New Record." << endl;
    cout << "5.Quit New Record." << endl;

    cout << "Enter Your selection > "<< flush;

    int value;
    cin >> value;

    if (value ==5){
        cout << "Application quitting..." << endl;
    }
}
