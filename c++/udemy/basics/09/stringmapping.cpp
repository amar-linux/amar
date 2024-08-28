#include<iostream>

using namespace std;

int main()
{
    string letter = "abcdefghijklmnopqrstuvwxyzi0123456789";
    string map  =  "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";


    char letter_map[150] ={0};
    for (int i=0; i < (int)letter.size(); ++i)
    {
        letter_map[letter[i]] = map[i];    // this is like creating the entire ascii set if 
        // you may call that that.
    }
    string input;
    cout << "Enter the string: " << flush;
    cin >> input;

    for (int i =0; i < (int)input.size(); ++i)
    {
        if ('A' <= input[i] && input[i] <= 'Z')
            continue;
        input[i] = letter_map[input[i]];
    }
    cout << input << endl;




}
