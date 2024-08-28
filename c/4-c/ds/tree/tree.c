#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node_t
{
    struct node_t* right;
    struct node_t* left;
    int data;
}node;


node* allocateNode(){
    return ((node*)(malloc(sizeof(node))));
}


/*
int treeAdd(node** ptr, int value){
    node* temp = allocateNode();

    // initilize the temp 
    memset(temp, 0, sizeof(node));
    temp->data = value;
    if (!(*ptr))
    {
        *ptr = temp;
        return 1;
    }
    while(*ptr)
    {
        if (value < (*ptr)->data)
        {
            *ptr = (*ptr)->right;
        }else
        {
            *ptr = (*ptr)->left;
        }
    }
    *ptr = temp;
    return 1;
    
}

*/

int treeAdd(node** ptr, int value){
    node* temp = allocateNode();

    // initilize the temp 
    node* traversal = *ptr;
    memset(temp, 0, sizeof(node));
    temp->data = value;
    if (!traversal)
    {
        *ptr = temp;
        return 1;
    }
    while(traversal)
    {
        if (value < (*ptr)->data)
        {
            if (!(*ptr)->right)
            {
                (*ptr)->right = temp;
                break;
            }
            traversal = (*ptr)->right;
        }else
        {
            if (!(*ptr)->left)
            {
                (*ptr)->left = temp;
                break;
            }
            traversal = (*ptr)->left;
        }
    }
    return 1;
    
}


int printNode(node* ptr)
{
    if(!ptr)
    {
        printf ("Empty list ....\n");
        return 0;
    }
    printf("%d\t", ptr->data);
    printNode(ptr->left);
    printNode(ptr->right);


    return 1;
}


int main(){

    node *root = NULL;

    int arr[10] = {3,5,1,7,9,4,6,2,8,10};

    for (int i=0; i< 10; i++)
    {
        treeAdd(&root, arr[i]);
    }

    printNode(root);

}
