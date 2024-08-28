#include<iostream>
#include"cat.h"
using namespace std;

int main(){
   Cat jim;
  // jim.happy = false;  in case happy is publi variable , but if it is private .
  jim.makehappy();
   jim.speak();
   jim.makesad();
   jim.speak();
   
}