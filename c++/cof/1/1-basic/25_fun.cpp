#include<iostream>
using namespace std;

// calling the function from main .
void showMenu(){
    cout << "1. Search" << endl;
    cout << "2. view record " << endl;
    cout << "3. Quit" << endl;

}


void processSelection(){

    cout << "Enter the selection:" << endl;

   int input;
   cin >> input;

   switch(input){
       case 1:
           cout << "Searching ... " << endl;
           break;
       case 2:
           cout << "Viewing ..." << endl;
           break;
       case 3:
           cout << "Quitting " << endl;
           break;
       default: 
           cout << "Please select the item from the menu.."<< endl;

   } 
}

int main(){


    showMenu();
    processSelection();

   return 0;
}
