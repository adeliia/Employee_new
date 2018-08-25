#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include <string>
using std::string;

#include "commissionemployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &, const string &,
                               double = 0.0, double = 0.0, double = 0.0);

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
