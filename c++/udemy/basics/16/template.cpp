#include<iostream>

using namespace std;

template <typename Type>
Type MyMax(Type a, Type b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    cout << MyMax(2,5) << endl;
    cout << MyMax<int>(2,5) << endl;
    cout << MyMax(2.5,5.4) << endl;
    cout << MyMax<double>(2.5,5.4) << endl;
   // cout << MyMax(2,5.4) << endl;   // cant guess 
    cout << MyMax<double>(2,5.4) << endl;

    cout << MyMax('A', 'X') << endl;

}
