#include<iostream>


using namespace std;

struct Node
{
    int data{};
    Node* next;
    Node* prev;
    Node(int data):data(data){}
};
class LinkedList
{
private:
    Node* Head{};
    Node* Tail{};
    int length;
public:
    void print_reversed();
    void print_forward();
    void insert_end(int value);
    void delete_front();
    void delete_node_at_index(int index);
};

void link(Node* first, Node* second)
{
    if (first)
    {
        first->next = second;
    }
    if (second)
    {
        second->prev = first;
    }
}

void LinkedList::insert_end(int value)
{
    Node *item = new Node(value);
    if(!Head)
    {
        Head = Tail = item;
    }
    else
    {
        link(Tail, item);
        Tail = item;
    }
}

void LinkedList::print_reversed()
{
    Node *cur;
    for (cur = Tail; cur; cur = cur->prev)
    {
        cout << cur->data << ",  ";
    }
    cout << endl;
}

void LinkedList::print_forward()
{
    Node* cur;
    {
        for (cur = Head; cur; cur = cur->next)
        {
            cout << cur->data << ",  ";
        }
        cout << endl;
    }
}

void delete_node(Node *element)
{
    if(element)
    {
        delete(element);
    }
}


void LinkedList::delete_front()
{
    if(!Head)
    {
        return;
    }
    Node* cur = Head->next;
    delete_node(Head);
    Head = cur;
}

void LinkedList::delete_node_at_index(int index)
{
    if (index == 1)
    {
        delete_front();
    }
    else
    {
        Node* cur = Head->next;
        for (int i =2 ; i <= index; i++)
        {
            if (i == index)
            {
                cur->next->prev = cur->prev;
                cur->prev->next = cur->next;
            }
            else 
            {
                cur = cur->next;
            }
        }

    }
}

int main()
{
    LinkedList dll;
    dll.insert_end(5);
    dll.insert_end(10);
    dll.insert_end(15);
    dll.insert_end(20);
    dll.insert_end(25);

    dll.print_reversed();
    dll.print_forward();
  //  dll.delete_front();
    // index starts from 1.
    dll.delete_node_at_index(3);
    dll.print_forward();


}
