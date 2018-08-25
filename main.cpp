#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "employee.h"
#include "salariedemployee.h"
#include "commissionemployee.h"
#include "basepluscommissionemployee.h"

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedE("John", "Smith", 800);
    CommissionEmployee commissionE ("Sue", "Jones", 10000, .06);
    BasePlusCommissionEmployee basePlusE ("Bob", "Lewis", 5000, .04, 300);

    cout << "Employees processed individually using static binding: \n\n";

    salariedE.print();
    cout << "\nearned: $" << salariedE.earnings() << "\n\n";
    commissionE.print();
    cout << "\nearned: $" << commissionE.earnings() << "\n\n";
    basePlusE.print();
    cout << "\nearned: $" << basePlusE.earnings() << "\n\n";

    vector <Employee *> employees(3);

    employees[0] = &salariedE;
    employees[1] = &commissionE;
    employees[2] = &basePlusE;

    cout << "Employee processed polymorphically via dynamic binding:\n\n";

    cout << "Virtual function calls made off base-class pointers:\n\n";

    for (size_t i = 0; i < employees.size(); i++){
        virtualViaPointer(employees[i]);
    }

    cout << "Virtual function calls made off base-class references:\n\n";

    for (size_t i = 0; i < employees.size(); i++){
        virtualViaReference(*employees[i]);
    }

    return 0;
}

void virtualViaPointer(const Employee * const baseClassPtr) {
    baseClassPtr->print();
    cout << "\nearned: $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee & baseClassRef) {
    baseClassRef.print();
    cout << "\nearned: $" << baseClassRef.earnings() << "\n\n";
}
