#include<iostream>

using namespace std;

int main(){

    for (int i=0; i < 10; i++){
        cout << "i is " << i << endl;
        if (i ==5){
            break;
        }
        if (i ==3 ){
            continue ;
        }
        cout << "looping .. the loop .. " << i << endl;
    }

    cout << "Quitting the loop..!" << endl;
}
