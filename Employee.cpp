#include <iostream>
#include <string>

using namespace std;

class Employee{

    private :
    string empID;
    string name;
    float hourlyPay;
    int hoursWorked;
    float grossPay;

    public : Employee{
        cout << "Employee Constructor" << endl;
    }

    public : void Display(){
        cout << "*** EMPLOYEE RECORD ***" << endl << endl;
        cout << "Employee ID is " << empID << endl;
        cout << "Employee Pay is " << name << endl;
        cout << "Hours Worked is " << hoursWorked << endl;
        cout << "The Gross Pay is " << grossPay << endl;
    }

    public : void setEmpID(string temp){
        empID = temp;
    }

    public : void setName(string temp){
        name  = temp;
    }

    public : void setHourlyPay(flaot temp){
        hourlyPay = temp;
    }

    public : void setHoursWorked(int temp){
        hoursWorked = temp;
    }

    public : void setGrossPay(float temp){
        grossPay = temp;
    }

    public : string getEmpID(){
        return empID;
    }

    public : string getName(){
        return name;
    }

    public : float setHourlyPay(){
        return hourlyPay;
    }

    public : int setHoursWorked(){
        return hoursWorked;
    }

    public : float setGrossPay(){
        return grossPay;
    }

};
