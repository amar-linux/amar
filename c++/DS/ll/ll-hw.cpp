#include<iostream>

using namespace std;

struct Node
{
    Node* next{};
    int data{};
    Node(int data):next(0),data(data){}
};

// always initailaize the data in class or lese it takes the garbage value;
class LinkedList
{
private:
    Node* Head{};
public:
    void printll();
    void addNode(int value);
    Node* getTail();
};


void LinkedList::addNode(int value)
{
    Node* cur = new Node(value);
    if(!Head)
    {
        Head = cur;
    }
    else
    {
        cur->next = Head;
        Head = cur;
    }
}

void LinkedList::printll()
{
    Node* cur = Head;
    cout << "elements in list are: " << endl;
    while(cur)
    {
        cout << cur->data << ",  ";
        cur = cur->next;
    }
}

Node* LinkedList::getTail()
{
    Node* cur = Head;
    while(cur->next)
    {
        cur = cur->next;
    }
    return cur;
}

int main()
{
    LinkedList ll;
    ll.addNode(15);
    ll.addNode(18);
   // ll.addNode(32);
   // ll.addNode(64);
   // ll.addNode(43);
   // ll.addNode(13);

    ll.printll();
    cout << endl;

    Node* tail = ll.getTail();
    cout << tail->data << endl;

}
