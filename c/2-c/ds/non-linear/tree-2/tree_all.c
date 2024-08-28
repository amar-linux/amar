#include<stdio.h>
#include<stdlib.h>
/* Add node
 * tree trversal 
 * depth first traversal and breadth first traversal
 * mirror of a tree
 * find min and max of a tree
 * find horizontal distance between two nodes.
 */
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

typedef struct qnode{
    struct qnode* next;
    node* element;
}qnode;

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->data = value;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}


void insert_node(node** root, int value){
    // base condition from where it will return
    if (!(*root)){
         if (!((*root) = create_node(value)))
             printf ("Node creation failed");
         return;
    }else if (value <= (*root)->data){
        insert_node(&(*root)->left, value);
    }else{
        insert_node(&(*root)->right, value);
    }
}

void print_preorder(node* root){
    if (!root) return; // base condition or return from 
    // 1.visit 2. left 3. right
    printf ("%d, ",root->data);  // viting the node.
    print_preorder(root->left); // visiting left sub tree
    print_preorder(root->right); // visiting right subtree.
}

void print_inorder(node* root){
    if (!root) return; // base condition or return from 
    // 1.visit 2. left 3. right
    print_inorder(root->left); // visiting left sub tree
    printf ("%d, ",root->data);  // viting the node.
    print_inorder(root->right); // visiting right subtree.
}

void print_postorder(node* root){
    if (!root) return; // base condition or return from 
    // 1.visit 2. left 3. right
    print_postorder(root->left); // visiting left sub tree
    print_postorder(root->right); // visiting right subtree.
    printf ("%d, ",root->data);  // viting the node.
}


qnode* deque(qnode** head){
    if (!(*head)){
        printf ("nothing to deque ..\n");
        return NULL;
    }
    qnode* temp= *head;
    *head = (*head)->next;
    return temp;
}

qnode* create_q_node(node* root){
    qnode* temp;
    if (!(temp = malloc(sizeof(qnode)))){
        return NULL;
    }
    temp->next = NULL;
    temp->element= root;
    return temp;

}

void enqueue(qnode** head, qnode** tail,node* root ){
    qnode* temp;
    if (!(temp = create_q_node(root))){
        printf ("Node creation failed..\n");
        return;
    }
    if (!(*head)){
        *head = temp;
        *tail = temp;
        return;
    }
    (*tail)->next = temp;
    *tail = temp;
}


void print_level_order(node* root){
    qnode* head = NULL;
    qnode* tail = NULL;
    qnode* temp;

    if (!root){
        printf ("Tree is empty ..\n");
        return;
    }
    enqueue(&head,&tail,root);
    while (head){
        temp = deque(&head);
        if (temp->element->left)
        enqueue(&head,&tail,temp->element->left);
        if (temp->element->right)
        enqueue(&head,&tail,temp->element->right);
        printf ("%d, ",temp->element->data);
        free(temp);

    }


}

void swap(node** left, node** right){
    node* temp;
    temp = *right;
    *right = *left;
    *left = temp;
}

void tree_mirror(node* root){

    if (!root){
        return;
    }else{
        tree_mirror(root->left);
        tree_mirror(root->right);
        //swap the nodes.
        swap(&root->left, &root->right);
    }
}

void find_min_of_tree(node* root){

    if (root->left == NULL){
        printf ("The minimum value is %d\n",root->data);
        return;
    }
    find_min_of_tree(root->left);
    
}

void find_max_of_tree(node* root){

    if (root->right == NULL){
        printf ("The max value is %d\n",root->data);
        return;
    }
    find_max_of_tree(root->right);
    
}


int main(){
    node* root = NULL;

    int arr[]={15,10,5,3,7,12,11,13,20,17,22,21,23};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i< len; i++){
        insert_node(&root, arr[i]);
    }
   /* 
    print_preorder(root);
    printf("\n");
    print_inorder(root);
    printf("\n");
    print_postorder(root);
    printf("\n");
    print_level_order(root);
    printf ("\n");
*/

    print_level_order(root);
    printf ("\n");

 //   tree_mirror(root);

    print_level_order(root);
    printf ("\n");
    find_min_of_tree(root);
    find_max_of_tree(root);
}
