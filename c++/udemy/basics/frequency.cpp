#include<iostream>
//sizeof array is not fixed 
//element would range from 0 to 10.
//create a new array with sixe 10+1.

using namespace std;

int main()
{
    int arr[] = {1,1,2,3,4,6,3,4,7,8,2,9,1,7,6,6,6};
    int len = sizeof(arr)/sizeof(int);
    int frequency[11] = {0};
    int index =0;

    for (int i=0; i< len; i++)
    {
        frequency[arr[i]]++;
    }


    for (int i=0; i <10; i++)
    {
        if (frequency[i] > frequency[index])
        {
            index = i;
        }
    }
    cout << index << " -repeated- " << frequency[index] << " times" << endl;


}
