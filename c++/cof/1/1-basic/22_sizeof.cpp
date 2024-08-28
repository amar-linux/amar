#include<iostream>

using namespace std;

int main(){
    

    int values[] ={3,4,5,6};

    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;


    for (int i =0; i < (sizeof(values)/sizeof(values[0])); i++)
    {
        cout << values[i] << " " << flush;
    }
    cout << endl;
    return 0;
}