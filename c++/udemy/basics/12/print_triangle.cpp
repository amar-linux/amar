#include<iostream>

using namespace std;



void print_triangle(int level)
{
    if (level ==0)
    {
        return ;
    }
    else 
    {
        for (int i=0; i < level; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }
    print_triangle(level-1);
}

void print_triangle2(int level)
{
    if (level ==0)
    {
        return ;
    }
    else 
    {
        print_triangle2(level-1);
        for (int i=0; i < level; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    print_triangle(6);
    print_triangle2(6);


}
