#include<iostream>

using namespace std;

int main(){

    string text[]= {"one", "two", "three"};
    string *pText= text;
    //Array variable know how much data its pointing to 
    //poiter does not know how many strings its pointing to.

    cout << sizeof(text)/sizeof(string) << endl;

    for (int i=0; i < (int)(sizeof(text)/sizeof(string)); i++){
        cout << text[i] << "  " << flush;
    }
    cout << endl;
    for (int i=0; i < (int)(sizeof(text)/sizeof(string)); i++){
        cout << pText[i] << "  " << flush;
    }
    cout << endl;
    for (int i=0; i < (int)(sizeof(text)/sizeof(string)); i++){
        cout << *pText << "  " << flush;
        pText = pText + 1;
    }
    cout << endl;
    for (int i=0; i < (int)(sizeof(text)/sizeof(string)); i++, pText++){
        cout << *pText << "  " << flush;
    }
    cout << endl;



    return 0;
}
