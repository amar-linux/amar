#include<stdio.h>
#include<string.h>

#define BUFLEN 1024
// strtok is destructive.
//
int sum (int a, int b){
    return a+b;

}

int main(){

    char input[BUFLEN] = "REY, Luke, Leila: Anake, santosh";
//    char input2[BUFLEN] = "AMAR, chouhan, santosh: andrea, hapur";

    int i=0;

 //  char *token = strtok (input, "-");
     char* token;
 
  //  printf ("%d:[%p]--- %s\n", i, token, token);

    token = strtok (input, ",:");
    printf ("%d:[%p]--- %s\n", i, token, token);
/*
    token = strtok (input2, ",");
    printf ("%d:[%p]--- %s\n", i, token, token);

    printf ("%d\n", sum(5,4));
*/
    while (token != NULL){
       token = strtok (NULL, ",:"); // when i pass in NULL
       //i am saying that remeber where you left off.
     printf ("%d:[%p]--- %s\n", i, token, token);
    }
/*int a =0;
       do{
           if (a==0){
       token = strtok (input, ","); 
       i =1;
           }// when i pass in NULL
       //i am saying that remeber where you left off.
       token = strtok (NULL, ","); 
       printf ("%d:[%p]--- %s\n", i, token, token);
    }while (token != NULL);
  */  
}
