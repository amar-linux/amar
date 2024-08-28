#include<iostream>

#include"cat.h"
#include"animals.h"

using namespace std;
using namespace amar;
using namespace animals;

int main()
{
    amar::Cat cat2;
    cat2.speak();

    cout << amar::CATNAME << endl;
    cout << animals::CATNAME << endl;

    return 0;

}
