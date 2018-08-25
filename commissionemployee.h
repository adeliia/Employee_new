#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>
using std::string;

#include "employee.h"

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const string &, const string &,
                       double = 0.0, double = 0.0);

    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H
