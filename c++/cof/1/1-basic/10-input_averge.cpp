#include<iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter the numbers thats average has to be calculated: " << flush;
    cin >> number;
    float sum =0;
    float variable=0;

    for (int i=0; i< number; i++){
        cout << "Enter the" << i << "number: " << flush;
        cin >> variable;
        sum +=variable;
        cout << endl;
    }
    float avergae = sum/number;
    cout << "The average is: " << avergae << endl;
}
