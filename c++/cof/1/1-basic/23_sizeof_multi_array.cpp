#include<iostream>

using namespace std;

int main()
{
    string animals[2][3]{
        {"cat", "dog", "horse"},
        {"rat", "mouse", "squirrel"}
    };


int i=0;
int j =0;

for (i=0; i < (sizeof(animals)/sizeof(animals[0])); i++){
    for (j=0; j < (sizeof(animals[0])/sizeof(animals[0][0])); j++){
        cout << animals[i][j] << "  " << flush;
    }
    cout << endl;
}
}