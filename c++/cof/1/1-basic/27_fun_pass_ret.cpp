#include<iostream>
using namespace std;

void showProces(){

    cout << "1. search ..."<< endl;
    cout << "2. view ..."<< endl;
    cout << "3. Quit ..."<< endl;

}

int getSelection(){
    int selection;
    cin >> selection;
    return selection;

}

void processSelection(int selection){

    switch(selection){
        case 1:
            cout << "searching...." << endl;
            break;
        case 2:
            cout << "Viewing ...." << endl;
            break;
        case 3:
            cout << "Quitting ..." << endl;
            break;
        default:
            cout << "enter the value ...." << endl;
    }
    

    

}


int main(){

    showProces();
    int selection = getSelection();
    processSelection(selection);

}
