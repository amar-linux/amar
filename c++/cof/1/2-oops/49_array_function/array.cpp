#include<iostream>

using namespace std;

void show1(int elements, string texts[]){

    
    for (int i=0; i < elements; i++){
        cout << texts[i] << endl;
    }
}

int main(){
    string texts[]={"apple", "orange","banana"};
    cout << sizeof(texts) << endl;
    int elements = sizeof(texts)/sizeof(texts[0]);
    show1(elements, texts);
    return 0;
}


