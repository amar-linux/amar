#include<stdio.h>
#include<string.h>


int main(){
    char input[] = "Rey,luke,kedar:Amar:santosh,sanjit,hari";

    int i =0;
    char* token = strtok (input, ",:");
    printf ("%d:[%p]----%s\n",i , token,token);
    i++;
    // both : and , are separate delimiters 
    // with wich given string has to be tokenized.
    while (token){
        token = strtok(NULL, ",:");
        printf ("%d:[%p]----%s\n",i , token,token);
        i++;
    }
}
