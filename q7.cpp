// Design a class named PersonData with the following member variables lastName,
// firstName, address, city, state and phone. Write the appropriate constructor, accessor and
// mutator functions for these member variables. Next, design a class named CustomerData,
// which is derived from the PersonData class. The CustomerData class should have the
// following member variables: customerNumber, email id. The customerNumber variable will
// be used to hold a unique integer for each customer. Write appropriate constructors, accessor
// and mutator functions for these member variables. Demonstrate an object of the
// CustomerData class in a simple program.

#include <iostream>

using namespace std;

class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string phone;

public:
    // Write the appropriate constructor
    PersonData(string lastName, string firstName, string address, string city, string state, string phone)
    {
        this->lastName = lastName;
        this->firstName = firstName;
        this->address = address;
        this->city = city;
        this->state = state;
        this->phone = phone;
    }

    // Write the appropriate accessor
    void getPersonData()
    {
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Address: " << address << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Phone: " << phone << endl;
    }

    // Write the appropriate mutator
    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }
    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setState(string state)
    {
        this->state = state;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
};

// Next, design a class named CustomerData, which is derived from the PersonData class.
// The CustomerData class should have the following member variables: customerNumber, email id.
class CustomerData : public PersonData
{
private:
    int customerNumber;
    string email;

public:
    // Write the appropriate constructor

    CustomerData(string lastName, string firstName, string address, string city, string state, string phone, int customerNumber, string email) : PersonData(lastName, firstName, address, city, state, phone)
    {
        this->customerNumber = customerNumber;
        this->email = email;
    }
    // Write the appropriate accessor
    void getCustomerData()
    {
        PersonData::getPersonData();
        cout << "Customer Number: " << customerNumber << endl;
        cout << "Email: " << email << endl;
    }

    // Write the appropriate mutator
    void setCustomerNumber(int customerNumber)
    {
        this->customerNumber = customerNumber;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
};

int main()
{
    CustomerData customer("Thomas", "Aeden", "BMSCE", "Bangalore", "IN", "123-456-7890", 12345, "a@gmail.com");
    customer.getCustomerData();
    return 0;
}
