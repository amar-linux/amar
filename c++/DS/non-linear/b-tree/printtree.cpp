#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
    Node(int data):data(data){}
};


void print_postorder(Node *current)
{
    if(!current)
        return;
    print_postorder(current->left);
    print_postorder(current->right);
    cout << current->data << ", ";
    
}

int main()
{
    Node *root = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);
    Node *node7 = new Node(7);
    Node *node8 = new Node(8);

    root->left = node2;
    root->right = node3;

    node2->left = node4; 
    node2->right = node5; 

    node5->right = node7;
    node3->right = node6;

    node6->left = node8;


    print_postorder(root);
}
