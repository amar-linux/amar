#include<iostream>
#include<assert.h>
using namespace std;

struct Node
{
    int data{};
    Node *next{};
    Node(int data):data(data){}
};

class LinkedList
{
private:
    Node* Head{};  // {}  this is zero initialization of variable.
    Node* Tail{};
    int Length =0;
public:
    void node_insert_at_end(int data);
    void printll();
    Node* getIndexElement(int index);
    int search(int value);
    int searchImproved(int value);
    void debugVerifyDataIntegrity();
    void deleteFront();
    void deleteElement(int value);
};

void swap (int *prev, int* cur)
{
    int temp = *prev;
    *prev = *cur;
    *cur = temp;
}

int LinkedList::searchImproved(int value)
{
    int index = 0;
    for (Node* cur = Head, *prev = NULL; cur; prev = cur, cur = cur->next)
    {
        if (cur->data == value)
        {
            if(!prev)
                return index;
            swap (prev->data, cur->data);
            return index -1;   // because we will change the index and in new ll it will be shifted one place towards the head.
        }
        index++;
    }
    return -1;
}

void LinkedList::node_insert_at_end(int data)
{
    Node *item = new Node(data);
    if (!Head && ! Tail)
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
    Node* temp_head  = Head;
    while (temp_head)
    {
        cout << temp_head->data << "  ";
        temp_head = temp_head->next;
    }
    cout << "\n";
}

int LinkedList::search(int value)
{
    int index = 0;
    for (Node* cur = Head; cur; cur = cur->next)
    {
        if (cur->data == value)
            return index;

        ++index;
    }
    return -1;
}

Node* LinkedList::getIndexElement(int index)
{
    int count = 0;
    for (Node* cur = Head; cur; cur = cur->next)
    {
        if(++count == index )
            return cur;
    }
    return NULL;
} 

void LinkedList::deleteFront()
{
    if(Head)
    {
       Node *cur = Head;
       Head = Head->next;
       delete(cur);
       Length--;

    }
    if (!Head)
    {
        Tail = NULL;  // if we deleted the last element we need to make ytail as NULL.
    }
}


void LinkedList::debugVerifyDataIntegrity()
{
    if (Length ==0)
    {
        assert(Head == NULL);
        assert(Tail == NULL);
    }
    else
    {
        assert (Head != NULL);
        assert (Tail != NULL);
        if (Length ==1)
        {
            assert(Head == Tail);
        }
        else
        {
            assert(Head != Tail);
        }
        assert(!Tail->next);
    }
}

void LinkedList::deleteElement(int value)
{
    if (!Head)
    {
        return;
    }
    for (Node* cur =Head, *prev =NULL; cur; prev = cur, cur = cur->next)
    {
        if (cur->data == value)
        {
            if (!prev)
              Head = cur->next;
            else 
            {
                prev->next = cur->next;
            }
            Length--;
            delete(cur);
            return;
        }
    }
    if(!Head)
    {
        Tail = NULL;
    }
    cout << " could not find the element " << endl;
}

int main()
{
    LinkedList ll;
    ll.node_insert_at_end(10);
    ll.node_insert_at_end(12);
    ll.node_insert_at_end(15);
    ll.node_insert_at_end(18);

    ll.printll();
    cout << endl;
    Node* element  = ll.getIndexElement(3);
    if (element)
    {
        cout << element->data << endl;
    }
    else 
    {
        cout << "Index is not present.." << endl;
    }
    cout << ll.search(15) << endl;
    cout << ll.search(99) << endl;

    
    cout << ll.searchImproved(15) << endl;
    cout << ll.searchImproved(15) << endl;
    cout << ll.searchImproved(15) << endl;
    cout << ll.searchImproved(15) << endl;
   // ll.deleteFront();
    ll.printll();
    ll.deleteElement(12);
    ll.printll();
    ll.deleteElement(99);
    ll.debugVerifyDataIntegrity();

}
