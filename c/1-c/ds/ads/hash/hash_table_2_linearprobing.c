#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<stdbool.h>

#define MAX_NAME 250
#define TABLE_SIZE 10


typedef struct person{
    char name[MAX_NAME];
    int age;
}person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char* name) {
    int len = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i =0; i< len; i++){
        hash_value += name[i];
        hash_value = (hash_value*name[i])%TABLE_SIZE;
    }
    return hash_value;

}

bool hash_table_insert(person* p){
    if (p == NULL) return false;
    int index = hash(p->name);
    for (int i=0; i < TABLE_SIZE;i++){
        int try = (i+index)%TABLE_SIZE;
        if (hash_table[try] == NULL){
            hash_table[try] = p;
            return true;
        }
    }
    return false;
}


void init_hash_table(){
    for (int i=0; i< TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
    // table is empty.
}

void print_table(){
    for(int i=0; i< TABLE_SIZE; i++){
        if (hash_table[i] == NULL){
            printf ("\t%i\t---\n",i);
        }else{
            printf("\t%i\t%s\n",i,hash_table[i]->name);

        }
    } 
    printf ("----------***********------------\n");
}
// find a person in table by name 
person* hash_table_lookup(char* name){

    int index = hash(name);
    for (int i=0; i < TABLE_SIZE; i++){
        int try = (index+i)%TABLE_SIZE;
        if (hash_table[try] != NULL
                && strncmp(hash_table[try]->name, name, MAX_NAME)== 0){
            return hash_table[try];
        }
    }
    return NULL;
}
// delete the person from hash table by name 
// the reyurned poiner is of no use as the memory allocated is not 
// on heap for the person
// we are declaring the persons in main 
// every person indiviaually

person* hash_table_delete(char* name){
    int index = hash(name);
    for (int i=0; i < TABLE_SIZE; i++){
        int try = (i+ index)%TABLE_SIZE;
        if (hash_table[try] !=NULL
                && strncmp (hash_table[try]->name, name, MAX_NAME)== 0){
            hash_table[try] = NULL;
            return hash_table[try]; // returning tmp in case it is needed to be free
            // in case it was on heap.
        }

    }
    return NULL;
}

int main(){

    init_hash_table();
    print_table();
   /* 
    printf ("jacob => %u\n",hash("jacob"));
    printf ("amar => %u\n",hash("amar"));
    printf ("santosh => %u\n",hash("santosh"));
    printf ("sanjit => %u\n",hash("sanjit"));
    printf ("nalla => %u\n",hash("nalla"));
    printf ("kedar => %u\n",hash("kedar"));
    printf ("chouhan=> %u\n",hash("chouhan"));
*/

    person santosh = {.name="santosh", .age=21};
    person sanjit = {.name="sanjit", .age=12};
    person kedar = {.name="kedar", .age=28};
    person happy = {.name="happy", .age=22};
    person chouhan = {.name="chouhan", .age=33};
    person hari = {.name="hari", .age=97};
    person hemant  = {.name="hemant", .age=89};
    person chetan  = {.name="chetan", .age=31};
    person adiyta  = {.name="aditya", .age=42};
    person raghu  = {.name="raghu", .age=38};
    person ajit  = {.name="ajit", .age=17};
    person prem  = {.name="prem", .age=47};

    hash_table_insert(&santosh);
    hash_table_insert(&sanjit);
    hash_table_insert(&kedar);
    hash_table_insert(&happy);
    hash_table_insert(&chouhan);
    hash_table_insert(&hari);
    hash_table_insert(&hemant);
    hash_table_insert(&chetan);
    hash_table_insert(&adiyta);
    hash_table_insert(&raghu);
    hash_table_insert(&ajit);
    hash_table_insert(&prem);

    person *tmp = hash_table_lookup("prem");
    if (tmp ==NULL){
        printf ("Not found\n");
    }else {
        printf ("Found %s\n ",tmp->name );
    }
    tmp = hash_table_lookup("Amar");
    if (tmp ==NULL){
        printf ("Not found\n");
    }else {
        printf ("Found %s\n ",tmp->name );
    }

    print_table();
    hash_table_delete("raghu");
    hash_table_insert(&prem);
    tmp = hash_table_lookup("prem");
    if (tmp ==NULL){
        printf ("Not found\n");
    }else {
        printf ("Found %s\n ",tmp->name );
    }
    
    print_table();

    return 0;
}
