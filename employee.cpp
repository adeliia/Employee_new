#include <iostream>
using std::cout;
using std::endl;

#include "employee.h"

Employee::Employee(const string & first, const string & last)
    :firstName(first), lastName(last)
{}

void Employee::setFirstName(const string & first){
    firstName = first;
}

string Employee::getFirstName() const {
    return firstName;
}

void Employee::setLastName(const string & last){
    lastName = last;
}

string Employee::getLastName() const {
    return lastName;
}

void Employee::print() const {
    cout << getFirstName() << " " << getLastName() << endl;
}
