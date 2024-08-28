#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define NUM_CHARS 11

typedef struct trienode{
    bool terminal;
    struct trienode* children[NUM_CHARS]; // this will a lookup table;
}trienode;

trienode* creat_node(){
    trienode *newnode= malloc(sizeof(trienode));

    for (int i=0; i< NUM_CHARS; i++){
        newnode->children[i] = NULL;
    }
    newnode->terminal = false;
    return newnode;
}
bool trieinsert(trienode** root, char* signedtxt){
    if (*root == NULL){
        *root = creat_node();
    }


    unsigned char* text = (unsigned char*)signedtxt;
    trienode* temp = *root;
    int len = strlen(signedtxt);

    for (int i=0; i< len ; i++){
        if (temp->children[text[i]]== NULL){
            // create node.q
            temp->children[text[i]] = creat_node();
        }
        temp = temp->children[text[i]];
    }
    if (temp->terminal){
        return false;
    }
    else {
        temp->terminal= true;
        return true;
    }
}

void printtrie_rec(trienode* node, unsigned char* prefix, int len){
    unsigned char newprefix[len +2];
    memcpy(newprefix, prefix, len);
    newprefix[len+1]=0;

    if (node->terminal){
        printf ("WORD: %s\n", prefix);
    }
    for (int i=0; i< NUM_CHARS; i++){
        if (node->children[i]!= NULL){
            newprefix[len] =i;
            printtrie_rec(node->children[i], newprefix, len+1);
        }
    }
}

void printtrie(trienode* root){
    if(root == NULL){
        printf ("TRIE EMPTY!\n");
        return;
    }
    printtrie_rec(root, NULL, 0);
}

int main(){
    trienode* root = NULL;

    trieinsert(&root, "KIT");
    trieinsert(&root, "CAT");
    trieinsert(&root, "CATTLE");
    trieinsert(&root, "HARVET");
    trieinsert(&root, "APPLE");
    trieinsert(&root, "MANGO");
    trieinsert(&root, "ORANGE");
    printtrie(root);

}
