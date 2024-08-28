#include<iostream>

using namespace std;

int main(){
    string animal[2][3] ={
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };


int i =0;
int j=0;

/*
string animal[][3]   will also do .
  string animal[2][3] ={
        {},
        {}
    }
    */
   // this above statement has array with two rows.

   for (i=0; i < 2; i++){
       for (j = 0; j <3; j++){
           cout << animal[i][j] << "  " << flush;
       }
       cout << endl;

   }
}