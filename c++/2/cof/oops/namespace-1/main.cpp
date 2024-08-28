#include<iostream>

#include"anaimal.h"
#include"cat.h"

using namespace std;
using namespace cats;
using namespace animals;


int main()
{
   // Cat cat;
   // cat.speak();

    animals::Cat cat2;
    cat2.speak();

    cats::Cat cat3;
    cat3.speak();


    cout << cats::CATNAME << endl;
    cout << animals::CATNAME << endl;


  //  cout << CATNAME << endl;

    return 0;

}
