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

unsigned int hash(char* name) {
    return 5;

}


int main(){

    printf ("jacob => %u\n",hash("jacob"));
    printf ("amar => %u\n",hash("amar"));
    printf ("santosh => %u\n",hash("santosh"));
    printf ("sanjit => %u\n",hash("sanjit"));
    printf ("nalla => %u\n",hash("nalla"));
    printf ("kedar => %u\n",hash("kedar"));
    printf ("chouhan=> %u\n",hash("chouhan"));

    return 0;
}
