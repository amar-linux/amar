#include<iostream>
using namespace std;

int main(){
    string texts[] ={"one", "two", "three"};

    cout << sizeof(texts)/sizeof(string) << endl;

    string *pText = texts;

    for (int i=0; i < (sizeof(texts)/sizeof(string)); i++){
        cout << texts[i] << " " << flush;
    }
    cout << endl;
    for (int i=0; i < (sizeof(texts)/sizeof(string)); i++){
        cout << pText[i] << " " << flush;
    }
    cout << endl;

    for (int i=0; i < (sizeof(texts)/sizeof(string)); i++){
        cout << *(pText + i) << " " << flush;
    }
    cout << endl;
}