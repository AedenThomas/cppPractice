// Design a Ship class with member variables name and year with constructors and appropriate
// accessors and mutators.
// - Virtual print function that displays the ship’s name and the year it was built.
// - Design a CruiseShip class that is derived from the Ship class. The CruiseShip class
// should have the following members a variable for the maximum number of passengers
// and appropriate accessors, mutators and constructor. A print function that overrides the
// print function in the base class. The CruiseShip class’s print function should display
// only the ship’s name and the maximum number of passengers.
// - Design a CargoShip class that is derived from the Ship class. The CargoShip class
// should have the following members: a member variable for the cargo capacity,
// constructor, accessors and mutators. A print function that overrides the print function in
// the base class. The CargoShip class’s print function should display only the ship’s

// name and the ship’s cargo capacity. Demonstrate the classes in a program that has an
// array of Ship pointers. The array elements should be initialized with the addresses of
// dynamically allocated Ship. The program should then step through the array, calling each
// object’s print function.
#include <iostream>
#include <string>
using namespace std;
class Ship
{
protected:
    string name;
    int year;

public:

    Ship(string name, int year)
    {
        this->name = name;
        this->year = year;
    }
    // Write the appropriate accessor
    void getShipData()
    {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
    }
    // Write the appropriate mutator
    void setName(string name)
    {
        this->name = name;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    virtual void print()
    {
        cout<<"I am a ship"<<endl;
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
    }
};


class CruiseShip : public Ship
{
private:
    int maxPassengers;

public:
    CruiseShip(string name, int year, int maxPassengers) : Ship(name, year)
    {
        this->maxPassengers = maxPassengers;
    }
    // Write the appropriate accessor
    void getCruiseShipData()
    {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Max Passengers: " << maxPassengers << endl;
    }
    // Write the appropriate mutator
    void setMaxPassengers(int maxPassengers)
    {
        this->maxPassengers = maxPassengers;
    }
    void print()
    {
        cout<<"I am a cruise ship"<<endl;
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Max Passengers: " << maxPassengers << endl;
    }
};
class CargoShip : public Ship
{
private:
    int cargoCapacity;

public:
    CargoShip(string name, int year, int cargoCapacity) : Ship(name, year)
    {
        this->cargoCapacity = cargoCapacity;
    }
    // Write the appropriate accessor
    void getCargoShipData()
    {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }
    // Write the appropriate mutator
    void setCargoCapacity(int cargoCapacity)
    {
        this->cargoCapacity = cargoCapacity;
    }
    void print()
    {
        cout<<"I am a cargo ship"<<endl;
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Cargo Capacity: " << cargoCapacity << endl;
    }
};

int main()
{
    Ship *ship[3];
    ship[0] = new Ship("Titanic", 1912);
    ship[1] = new CruiseShip("Aurora", 1887, 500);
    ship[2] = new CargoShip("Cargo", 1887, 100000);
    for (int i = 0; i < 3; i++)
    {
        ship[i]->print();
    }
    return 0;
}