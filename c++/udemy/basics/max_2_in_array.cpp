#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,79,8,6,9,88,81};
    int len = sizeof(arr)/sizeof(int);
    int max1 =arr[0];
    int max2 =arr[0];

    for (int i=0; i< len; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
            
        }
    }
    printf ("largest = %d and second largetst = %d\n",max1, max2);

}
