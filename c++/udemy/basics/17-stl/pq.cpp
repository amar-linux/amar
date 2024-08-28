#include<iostream>
#include<queue>


using namespace std;

void print(priority_queue<int> &pq)
{
    cout << "priority_queue element are" << endl;
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << endl;
}


int main()
{
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(1);
    pq.push(7);
    pq.push(0);

    print(pq);

    return 0;


}
