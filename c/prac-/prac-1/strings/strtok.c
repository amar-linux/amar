#include<stdio.h>
#include<string.h>

#define MAX_LEN 256
int main()
{
    char str[MAX_LEN] = "Amar, santosh: sharma, sanjit, abhisjek";
    int i =0;

    char* token = strtok(str, "-");
    printf("%d:[%p]---%s\n",i,token,token);

    token = strtok(str, ",");
    printf("%d:[%p]---%s\n",i,token,token);


    while (token != NULL)
    {
        token = strtok(NULL, ",:");
    printf("%d:[%p]---%s\n",i,token,token);

    }
}
