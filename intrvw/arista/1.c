#include<stdio.h>
void function(char**);
int main()
{
        char *arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" };
        function(arr);
        return 0;
}
void function(char **ptr)
{
    int arr[]= {1,2,3,4,5,6};
    int *ptr1 = arr;
    ptr1 -=2;
    printf ("%d\n",*ptr1);

    ptr -=5;
/*
        char *ptr1;
        ptr1 = (ptr += sizeof(int))[-2];
        printf("%s\n", ptr1);
        */
}
