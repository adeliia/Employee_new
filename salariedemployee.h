#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "employee.h"

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string &, const string &,
            double = 0.0);
     void setWeeklySalary(double);
     double getWeeklySalary() const;

     virtual double earnings() const override;
     virtual void print() const override;
private:
     double weeklySalary;
};

#endif // SALARIEDEMPLOYEE_H
