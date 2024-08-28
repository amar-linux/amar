#include<stdio.h>


int main(){
    char c1[5] = {'j','o','h','n','\0'};
    char *c2 = "john";
    char c3[] = "john";

    printf ("%s\n", c1);
    printf ("%s\n", c2);
    printf ("%s\n", c3);

    c3[2] = 'M';
    printf ("%s\n", c3);

}
