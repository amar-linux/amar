#include<iostream>

using namespace std;


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i< 10; i++){
        cout << "printing table of " << i << endl;
        for (int j =0; j < 10; j++){
            cout << (arr[i] * arr[j]) << ", " << flush;
            
        }
        cout << endl;
    }
}
