#include<stdio.h>
int main()
{
        char *ptr;
        char *string = "This is Arista Networks";
        string[4] = 'M';
        printf ("%s\n",string);
        /*
        ptr = string - 5;

        printf("%s",ptr);
        ptr += 20;
        printf("%s",ptr);
        */
        return 0;

}
