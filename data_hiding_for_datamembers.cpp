
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int employeeID;
    string employeeName;
    double employeeSalary;

public:

    Employee(int id, const string& name, double salary) {
        employeeID = id;
        employeeName = name;
        employeeSalary = salary;
    }


    int getEmployeeID() const {
        return employeeID;
    }

    string getEmployeeName() const {
        return employeeName;
    }

    double getEmployeeSalary() const {
        return employeeSalary;
    }


    void setEmployeeID(int id) {
        employeeID = id;
    }

    void setEmployeeName(const string& name) {
        employeeName = name;
    }

    void setEmployeeSalary(double salary) {
        employeeSalary = salary;
    }


    void displayEmployeeInfo() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Salary: $" << employeeSalary << endl;
    }
};

int main() {


    Employee emp(101, "John Doe", 50000.0);


    cout << "Employee Information:" << endl;
    cout << "----------------------" << endl;
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Employee Name: " << emp.getEmployeeName() << endl;
    cout << "Employee Salary: $" << emp.getEmployeeSalary() <<endl;


    emp.setEmployeeSalary(55000.0);

    cout << "\nUpdated Employee Information:" << endl;
    cout << "---------------------------" << endl;
    emp.displayEmployeeInfo();

    return 0;
}
