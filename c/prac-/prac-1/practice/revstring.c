#include<stdio.h>
#include<string.h>



void revstring(char *c)
{
    int i =0;
    int j = strlen(c) -1;
    while (i < j)
    {
        char temp = c[i];
        c[i] = c[j];
        c[j] =temp;
        i++;
        j--;
    }
    printf ("%s\n",c);

}

int main(){

    char c[]="marjeet";

    revstring(c);
    printf ("%s\n",c);
}
