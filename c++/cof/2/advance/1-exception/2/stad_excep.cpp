#include<iostream>

using namespace std;
#define throw(...)

class canGoWrong{
    public:
        canGoWrong()
        {
            char *pMemory = new char[9900];// new cannot allocate this big chunk and hence alloc will error out.
            delete []pMemory;
        }
};

class myException:public exception{
    public:
        virtual const char* what() const throw()
        {
            return " Something has happened";
        }
};


class Test{
    public:
        void goesWrong() throw (bad_alloc)
        {
            throw myException();
        }
};

int main()
{
    try{
        canGoWrong wrong;
    }
    catch(bad_alloc &e)
    {
        cout << "Caught an execption " <<  e.what() << endl;
    }

    cout << "Still running " << endl;
}
