#include<iostream>

using namespace std;

int main(){
    const int elements =5;
    string texts[elements] ={"one", "two", "Three", "four", "five"};
    string *pTexts = texts;

    pTexts = pTexts +3;

    cout << *pTexts << endl;

    pTexts -=2;
    cout << *pTexts << endl;
    string *pEnd = &texts[elements];

    pTexts = &texts[0];
    while (pTexts != pEnd){
        cout << *pTexts << " " << flush;
        *pTexts++;
    }
    cout << endl;
  

    return 0;

}