#include<iostream>

#include<fstream>

using namespace std;

int main(){
    ofstream outFile;

    string outPutFileName = "abc.txt";
    outFile.open(outPutFileName);

    if (outFile.is_open())
    {
      outFile << " i wrote it" << endl;;
      outFile << "again " << endl;
    }
    outFile.close();
}
