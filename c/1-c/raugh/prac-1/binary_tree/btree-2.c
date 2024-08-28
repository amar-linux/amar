#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* left;
    struct node* right;
    int data;
}bnode;

typedef struct qnode{
    struct qnode* next;
    bnode* element;
}qnode;

qnode* head = NULL;
qnode* tail= NULL;


bnode* create_new_node(int value){
    bnode* newnode= malloc(sizeof(bnode));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = value;
    return newnode;

}

bnode* add_node(int value, bnode* root){
    if (root == NULL){
        root =create_new_node(value);
    }else if (root->data > value){
        root->right = add_node(value, root->right);
    }else{
        root->left = add_node(value, root->left);
    }
    return root;
}

qnode* create_q_node(bnode* node){
    qnode* temp = malloc(sizeof(qnode));
    temp->next = NULL;
    temp->element = node;
 //   printf ("Enqued %d\n", node->data);
    return temp;
}

void enque(bnode* node){
    

    if (head == NULL){
        head = tail = create_q_node(node);
        return;
    }
    qnode* newnode = create_q_node(node);
    tail->next = newnode;
    tail = newnode;

}

qnode* deque(){
    qnode* temp = head;
    head = head->next;
//    printf ("Dequed %d\n", head->element->data);
    return temp;
}



void print_level_node(bnode* root){
   // bnode* temp;
    qnode* tempq;

    if(root == NULL){
        printf ("The tree is empty: ");
        return;
    }
    enque(root);
    while (head != NULL){
        tempq = deque();
        if (tempq->element->left != NULL){
            enque(tempq->element->left);
        }
        if (tempq->element->right != NULL){
            enque(tempq->element->right);
        }
        printf ("%d, ",tempq->element->data );
        free(tempq);
    }

}

void print_node(bnode* root){

    if (root == NULL) return;
    printf ("%d, ", root->data);
    print_node(root->right);
    print_node(root->left);
}

int main(){
    int value;
    bnode* root = NULL;

    for (int i=0; i< 20; i++){
        printf ("Enter the number: ");
        scanf("%d", &value);
        root = add_node(value, root);
    }
 //  print_node(root);
 while(1){
    printf ("\n");
    print_level_node(root);
    printf ("\n");
    print_level_node(root);
    printf ("\n");
    sleep(1);
    print_level_node(root);
    printf ("\n");
    sleep(1);
    print_level_node(root);
    printf ("\n");
    sleep(1);
    print_level_node(root);
    printf ("\n");
    sleep(1);
    
    print_level_node(root);
    printf ("\n");
    sleep(1);

    print_level_node(root);
    printf ("\n");
    sleep(1);
    print_level_node(root);
    printf ("\n");
    sleep(1);
    print_level_node(root);
    printf ("\n");
    sleep(1);
    
    }
}
