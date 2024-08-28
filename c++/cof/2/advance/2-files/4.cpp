#include<iostream>
#include<fstream>


using namespace std ;

int main()
{
    string fileName = "ifile.xt";

    ifstream inFile;

    inFile.open(fileName);

    if (inFile.is_open())
    {
        string line;
        //getline(inFile, line);
        inFile >> line;
        cout << line << endl;
    }
    else
    {
        cout << "Could not open the file " << endl;
    }
    return 0;
}




