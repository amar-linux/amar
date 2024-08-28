#include<iostream>
using namespace std;


class Machine{
    private:
        int id;
    public:
        Machine(): id(0){ cout << " machine no arg cons called" << endl; }
        Machine(int id): id(id){cout << "Machie parametarized constructor called << endl";}
        void info(){cout << "ID: " << id << endl;}

};


class Vehicle: public Machine{
    public:
        Vehicle (int id): Machine(id){cout << "Vehicle parametarized constructor called" << endl;}
        Vehicle(){ cout << " vehicle no arg cons called" << endl; }

};

class Car : public Vehicle{
    public:
  //      Car(){cout << "Car no argumnet const called " << endl;}
        Car(): Vehicle(999) {cout << " car no argument " << endl;}
       // Car(int id): { cout "Car parametarized constructor called" << endl; }
       // Car no argument constructor calls the vehicle constructor Vehicle(int id)
};

int main(){
Car car;
    car.info();  // this will call all the const in the uper classses 
  Vehicle vehicle(123);
  vehicle.info();
  // vehicle (int id) : can call Machine (int id) constructor.

    /*
     *  machine no arg cons called
 vehicle no arg cons called
Car no argumnet const called
ID: */


    return 0;
}
