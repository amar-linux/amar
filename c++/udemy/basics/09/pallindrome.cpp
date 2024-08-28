#include<iostream>

using namespace std;

int main()
{
    string name1;
    getline(cin, name1);
    string name2;
    getline(cin, name2);
    cout << name1 << endl;
    cout << name2 << endl;


    int i=0;
    int j=0;
    while (name1[i] != '\0' || name2[j] != '\0')
    {
        if (name1[i] != '\0')
        {
            cout << name1[i];
            i++;
        }
        if (name2[j] != '\0')
        {
            cout << name2[j];
            j++;
        }
    }
    cout << "\n\n";

}
