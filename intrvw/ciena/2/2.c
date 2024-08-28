#include<stdio.h>
#include<string.h>

void reverse_the_string(char *str, int len){
    printf ("%c",str[len-1]);
    for (int i=0; i < len/2; i++){
        
        char temp = str[i];
        str[i] = str[len -i -1];
        str[len-i-1] = temp;
    }
    
}

int main(){

    char str[]= "My name is amarjeet";
    int len = strlen(str);
    reverse_the_string(str, len);
    printf ("%s\n",str);
    reverse_the_string(str, len);
    printf ("%s\n",str);
}
