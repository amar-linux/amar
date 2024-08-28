#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    struct node* right;
    struct node* left;
    int data;
}node_t;

#define BUF_SIZE 50

typedef struct node_q{
    struct node_q* next;
    node_t* element;
}node_q;

node_q* create_queue_node(node_t* result){
    node_q* temp = malloc(sizeof(node_q));
    temp->element = result;
    temp->next = NULL;
    return temp;

}

void preorder_trversal(node_t* root){
    
    if (root == NULL)return;
    printf ("%d, ", root->data);
    preorder_trversal(root->left);
    preorder_trversal(root->right);
}

void inorder_traversal(node_t* root){
    if (root==NULL)return;
    inorder_traversal(root->left);
    printf("%d, ",root->data);
    inorder_traversal(root->right);
}

void postorder_traversal(node_t* root){
    if (root==NULL)return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d, ",root->data);
}

node_q *head = NULL;
node_q* tail = NULL;

void enque(node_t* root){
    if (head == NULL){
         head = tail = create_queue_node(root);
        return;
    }else {
        node_q* temp = create_queue_node(root);
        temp->next = head;
        head = temp;
    }

}

node_t* deque(){
    node_t* temp = head->element;
    node_q* temp1 = head;
    head = head->next;
    free(temp1);
    return temp;
}

void level_order_trversal(node_t * root){

    if (root == NULL) return;
    enque (root);

    while (head != NULL){
        node_t* temp = deque();// we deque and read the data
        printf ("%d, ", temp->data);
        if (temp->left != NULL){
            enque(temp->left); // we neque the child 
        }
        if (temp->right != NULL){
            enque(temp->right); // we enque the child 
        }
    }
}

node_t* create_node(int value){
    node_t* temp = malloc(sizeof(node_t));
    temp->data = value;
    temp->right= NULL;
    temp->left= NULL;
    return temp;
}


node_t* insert_node(node_t* result,int value){

    if (result == NULL){
        result = create_node(value);
    }else if (value <= result->data){
        result->left = insert_node(result->left, value);
    }else{
        result->right = insert_node(result->right, value);
    }
    return result;
}


int main(){
    char c[BUF_SIZE];
    int value;
    node_t* root = NULL;
    malloc(sizeof(node_t));

    for (int i =0; i< 10; i++){
        printf("Enter the value to be inserted: ");
        fgets(c, BUF_SIZE, stdin);
        value = atoi(c);
        root = insert_node(root, value);

        
    }
    level_order_trversal(root);
    printf ("\n\n");
    level_order_trversal(root);
    printf ("\n");
    printf ("Preorder traversal....\n");
    preorder_trversal(root);
    printf("\n");

    printf ("Inorder traversal....\n");
    inorder_traversal(root);
    printf("\n");

    printf ("Postorder traversal....\n");
    postorder_traversal(root);
    printf("\n");



}
