#include<stdio.h>
#include<string.h>

int main(){
    int a = 1234;
    char c[9]={0};
    int converter;
    int i=0;
    int result = a;

    while (result){
        converter = result%10;
        printf ("converter = %d\n", converter);
        result = result/10;
        printf ("result = %d\n", result);
        c[i]= converter + '0';
        i++;

    }
    printf ("%s\n",c);
    int len = strlen(c);
    for (int j =0; j< len/2; j++){
        char temp = c[j];
        c[j] = c[len-j-1];
        c[len-j-1]= temp;
    }
    printf ("%s\n",c);

}
