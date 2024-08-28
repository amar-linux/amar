#include<iostream>

using namespace std;

int main()
{
    char input[250];
   // getline (cin, input);
    cin.getline(input,50);
    int sz =0;
    int i =0;
    while (input[i] != '\0')
    {
        i++;
        sz++;
    }

    cout << "size of string is: " << sz << endl;

    for (int i=0; i < (sz/2); i++)
    {
        char temp = input[sz -i -1];
        input[sz - i -1] = input[i];
        input[i] = temp;
    }

    cout << input << " is th ereversed string" << endl;

}
