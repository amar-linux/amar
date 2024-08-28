#include<iostream>

using namespace std;

int main()
{
    string input = "bAAAaaazz";

    int count =1;
    int i=0;
    while (input[i] != '\0')
    {
        if ( 'A' <= input[i] && input[i] <= 'Z' )
        {
            i++;
        }
        else
        {
            if (input[i] == input[i+1])
            {
                count++;
                i++;
            }
            else 
            {
                cout << input[i] << " and count is: " << count << endl;
                count =1;
                i++;
            }
        }
    }

}
