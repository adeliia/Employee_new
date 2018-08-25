#include <iostream>
using std::cout;

#include "basepluscommissionemployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string & first, const string & last,
                                                       double sales, double rate, double salary)
    :CommissionEmployee (first, last, sales, rate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary){
    baseSalary = (salary > 0.0) ? salary : 0.0;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const {
    cout << "base salaried:";
    CommissionEmployee::print();
    cout << "; base salary: " << getBaseSalary();
}
