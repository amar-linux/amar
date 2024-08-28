#include<iostream>
#include<fstream>


using namespace std;

int main(){

    string inFileName ="test.txt";

    ifstream inFile;

    inFile.open(inFileName);
     
    // this particular bit will reads words from the file a the toke , with delimiter as space and the 
    // newline character.
    if (inFile.is_open())
    {
        string line;
        inFile >> line;
        cout << line << endl;

    
    }
    else
    {
        cout << " error reading from the file" << inFileName << endl;
    }

}
