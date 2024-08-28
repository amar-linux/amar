#include<iostream>

using namespace std;

int main()
{
    char ch1 = 'D';

    if ( 'A' <= ch1 && ch1 <= 'Z' )
    {
        cout << ch1 << " Is an uppercase" << endl;
        ch1 = ch1 - 'A' + 'a';
        cout << ch1 << " is now a lowercase" << endl;
    }
    else if( 'a' <= ch1 && ch1 <= 'z' ) {
        cout << ch1  << " is already a lowercase" << endl;
    }else if ('0' <= ch1 && ch1 <= '9')
    {
        cout << ch1 << " is a digit" << endl;
    }
    else 
    {
        cout << "it is neither digit nor alphabet" << endl;
    }

}
