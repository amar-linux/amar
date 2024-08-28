#include<iostream>

using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = true;
    bool error3 = true;

    if (error1){
        throw 8;
    }
    if(error2)
    {
        throw  " const charsomwthing else went wrong ";
    }
    if(error3)
    {
        throw string (" const charsomwthing else went wrong ");
    }

}

int main(){

    try{
        mightGoWrong();
    }

    catch(int e)  // exceptin that can be caught.
    {
        cout << "error code:" << e << endl;
    }

    catch (char const* e){
        cout << "error message" << e << endl;
    }

    catch (string &e){
        cout << " string error message:" << endl;
    }

    cout << "still running" << endl;
    return 0;
}
