#include <iostream>
using namespace std;

#include "commissionemployee.h"

CommissionEmployee::CommissionEmployee(const string &first,
                         const string &last, double sales, double rate)
    :Employee (first, last)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales( double sales ){
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

double CommissionEmployee::earnings() const {
    return getGrossSales() * getCommissionRate();
}

void CommissionEmployee::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales()
         <<"; commission rate: " << getCommissionRate();
}
