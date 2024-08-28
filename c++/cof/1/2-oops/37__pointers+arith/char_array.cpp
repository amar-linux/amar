#include<iostream>

using namespace std;

int main(){
    char texts1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char texts2[] = "hello";

    cout << texts1 << endl;
    cout << texts2 << endl;

    for (int i=0; i< sizeof(texts1); i++){
        cout << i << ":" << texts1[i] << endl;
    }
    cout << endl;
    for (int i=0; i< sizeof(texts1); i++){
        cout << i << ":" << texts2[i] << endl;
    }

   

    return 0;
}