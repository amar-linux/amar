#ifndef _CAT_H_
#define _CAT_H_

class Cat{
private:
    bool happy;
public:
    void speak();
    void makehappy();
    void makesad();   // this methods can access variable happy
    
};

// public variable can be accessed outside the claas , but private ones cannot be accessed outside the class.
// like if we write 
/* class Cat{
    private:
    bool happy;
}
calling bool in main as jim.happy will throw error.
*/



#endif /* */