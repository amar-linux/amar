#include<iostream>

using namespace std;

int main(){
    int val = 4;
    switch(val){
        case 1:
            cout << "Value is 1" << endl;
            break;
        case 2:
            cout << "Value is 2" << endl;
            break;
        case 3:
            cout << "Value is 3" << endl;
            break;
        case 4:
            cout << "Value is 4" << endl;
            break;
        case 5:
            cout << "Value is 45" << endl;
            break;
        default:
            cout << "default got executed " << endl;
    }


    return 0;
}
