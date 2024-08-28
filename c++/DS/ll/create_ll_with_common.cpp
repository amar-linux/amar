#include<iostream>
#include<assert.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data):data(data){}
};

class LinkedList
{
private:
    Node *Head;
    Node *Tail;
    int Length =0;
public:
    void node_insert_at_end(int data);
    void printll();
    int search();
    void delete_front();


};

void LinkedList::node_insert_at_end(int data)
{
    Node *item = new Node(data);
   if(!Head && ! Tail)
   {
       Head = Tail = item;
   } 
   else 
   {
       Tail->next = item;
       Tail = item;
   }
   Length++;
}

void LinkedList::printll()
{
    Node *temp = Head;
    while (temp)
    {
        cout << temp->data << ",\t";
        temp = temp->next;
    }
}


bool LinkedList::search(int value)
{

    int index = 0; 
    bool bFound = false;
    for (Node* cur = Head; cur; cur = cur->next)
    {

        if (cur->data == value)
        {
            bFound = true;
            return bFound;
        }
    }
    return bFound;
}



int main()
{

}
