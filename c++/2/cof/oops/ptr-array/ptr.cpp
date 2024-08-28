#include<iostream>

using namespace std;

int main()
{
    string texts[] = {"amar","bob","cam","larry"};
    string *ptxt = texts;

    int element = sizeof(texts)/sizeof(texts[0]);
    cout << "number of elements: " << element << endl;

    for (int i=0; i< element; i++)
    {
        cout << texts[i] << ",\t";
    }
    cout << endl;

    for (int i=0; i< element; i++)
    {
        cout << *ptxt << ",\t";
        ptxt++;
    }
    cout << endl;



}
