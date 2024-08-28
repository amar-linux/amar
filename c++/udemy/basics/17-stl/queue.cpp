#include<iostream>
#include<queue>


using namespace std;

int main()
{
    queue<int> q;   // template for queue of int.
    q.push(10);
    q.push(200);
    q.push(300);
    q.push(400);

    cout << q.back() << endl;

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    queue<string>names;
    names.push("Amar");
    names.push("John");
    names.push("Santosh");
    names.push("Sahil");

    while (!names.empty())
    {
        cout << names.front() << " ";
        names.pop();
    }
    cout << "\n" ;

}
