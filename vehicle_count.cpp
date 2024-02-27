// Create a vehicle having a non-static data member registration number and a static data member count.
// Non-static member functions setregno() and getregno() are used to get and set the registration number.
// A static member function getVehiclecount() is used to return the
// number of vehicles in the garage. Use a constructor to increment the vehicle count when a
// vehicle is created and the destructor to decrement the count when the vehicle is destroyed.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    static int vehicleCount;
    int regNo;

    Vehicle()
    {
        vehicleCount++;
    }
    ~Vehicle()
    {
        cout << "Destroying Vehicle" << endl;
        vehicleCount--;
    }
    void setRegNo(int);
    int getRegNo();
    static int getVehicleCount();
};

void Vehicle::setRegNo(int regNom)
{
    regNo = regNom;
}

int Vehicle::getRegNo()
{
    return regNo;
}

int Vehicle::getVehicleCount()
{
    return vehicleCount;
}

int Vehicle::vehicleCount = 0; // static variable

int main()
{
    Vehicle v1, v2, v3;
    cout << "Enter registration number for vehicle 1: ";
    cin >> v1.regNo;
    cout << "Enter registration number for vehicle 2: ";
    cin >> v2.regNo;
    cout << "Enter registration number for vehicle 3: ";
    cin >> v3.regNo;

    cout << "\nVehicle 1: " << v1.getRegNo();
    cout << "\nVehicle 2: " << v2.getRegNo();
    cout << "\nVehicle 3: " << v3.getRegNo();
    cout << "\nVehicle count: " << Vehicle::getVehicleCount() ;
    
    cout << "Done";
    return 0;
}