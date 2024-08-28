#include<iostream>

using namespace std;

int main()
{
    string name = "Amar";

    int sz = name.size();

    cout << sz << "\n"; // 4

    cout << name << "\n";

    for (int i =0; i < sz; ++i)
    {
        cout << name[i];
    }

    return 0;
}
