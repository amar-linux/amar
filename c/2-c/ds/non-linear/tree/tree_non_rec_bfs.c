#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node{
    struct tree_node* right;
    struct tree_node* left;
    int data;
}node_t;


// ds to hold wueued elements.
//
typedef struct node{
    struct node* next;
    node_t* entry;
}node;

node_t* create_tree_node(int value){
    node_t* temp;
    if (!(temp = malloc(sizeof(node_t)))){
        return NULL;
    }
    temp->right = NULL;
    temp->left = NULL;
    temp->data = value;
    return temp;
}

void insert_tree_node(node_t** root, int value){
    node_t* temp;
    node_t* traverse = *root;
    node_t* prev = *root;
    if (!(temp = create_tree_node(value))){
        printf ("Tree node creation failed ...\n");
        return;
    }
    if (!(*root)){
        *root = temp;
        return;
    }
    while (traverse){
        if (value > traverse->data){
            prev = traverse;
            traverse = traverse->right;
        }else{
            prev = traverse;
            traverse = traverse->left;
        }
    }
    if (value > prev->data){
        prev->right = temp;
    }else{
        prev->left = temp;
    }


}
void print_bfs(node* root){
    node* top;

}



int main(){
    int len;
    node_t* root = NULL; // for tree
   // node* head = NULL; // for queue
   // node* tail = NULL;  // for queue.
    int arr[]={20,17,11,18,8,12,25,28,22};
    len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++){
        insert_tree_node(&root, arr[i]);
    }

    printf_bfs(root);
    printf ("\n");
}
