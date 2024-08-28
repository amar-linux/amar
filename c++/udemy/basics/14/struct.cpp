#include<iostream>

using namespace std;

struct employee
{
    string name;
    int age;
    double salary;
    char gender;

    void readEmployee(){
        cout << "Enter employee 4 entries: ";
        cin >> name >> age;
        cin >> salary >> gender;
    }

    void printEmployee(){
        cout << name << "has salary " << salary << endl;
    }

    int getAge(){
        return age;
    }
    void setAge(int newAge)
    {
        age = newAge;
    }
};


void printEmployees(int added, employee *employeeArr)
{
    for (int i=0; i< added; i++)
    {
        employeeArr[i].printEmployee();
    }
}
int main()
{
    struct employee employeeArr[5];

    int added =0;
    employeeArr[++added].readEmployee();


    cout << "First employee is the one that has to be filled: added = " << added  << endl;
    cout << employeeArr[1].name << " " << employeeArr[1].age << " " << employeeArr[1].salary << endl;

    employeeArr[1].printEmployee();
    employeeArr[++added].readEmployee();



    employeeArr[1].printEmployee();
    employeeArr[2].printEmployee();

  //  printEmployees(added, employeeArr);

    return 0;

}
