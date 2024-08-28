#include<iostream>
#include<fstream>

using namespace std;


int main(){

    fstream file;
    
    string outputfilename ="test.txt";

    file.open(outputfilename, ios::out);

    if(file.is_open()){
        file << "Hello There AMAR";
        file << "kfed";
        file.close();
    }
    else
    {
        cout << " could not create file " << outputfilename << endl;
    }

}
