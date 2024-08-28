#include<iostream>

using namespace std;

int main(){

    char text[]= "hello";
    char a;

    cout << sizeof(text) << endl;
    char *sptr = text;
    char *eptr = &text[(sizeof(text)-2)];

    while ( sptr != eptr ){
        a = *sptr;
        *sptr = *eptr;
        *eptr = a;
        sptr++;
        eptr--;
        
    }
    cout << text << endl; 
}
