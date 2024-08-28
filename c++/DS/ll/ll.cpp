#include<iostream>

using namespace std;




struct node 
{
    int data;
    node* next;
    node(int data):data(data){}
};


void printNodeRcursively(node* head)
{
    if (!head)
    {
        cout << "\n";
        return;
    }
    printNodeRcursively(head->next);
    cout << head->data << "  ";
}

void printNode(node* head)
{
    while(head)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    node* n1 = new node(6);
    node* n2 = new node(8);
    node* n3 = new node(10);
    node* n4 = new node(12);
    node* head = n1;


    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    printNodeRcursively(head);
    cout << "\n";
    
    printNode(head);
    cout << "\n";

}
