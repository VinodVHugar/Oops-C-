#include <iostream>
using namespace std;

const int numemployee = 5;

class employee {
public:
    string name;
    int employee id,hour of work,salary,itr detucted amount;
};

int main() {
    employee employee[numemployee];

    // Input employee details
    for (int i = 0; i < numemployee; i++) {
        cout << "Enter the name of employee " << i + 1 << ": ";
        cin >> employee[i].name;
        cout << "Enter hour of work " << i + 1 << ": ";
        cin >> employee[i].hour of work;
        cout << "Enter itr detucted amount " << i + 1 << ": ";
        cin >> employee[i].itr detucted amount;
          cout << "Enter the  of employee  salary" << i + 1 << ": ";
        cin >> employee[i].salary;
    }

    // Display employee details
    cout << "employee Details:" << endl;
    for (int i = 0; i < numemployee; i++) {
        cout << "employee " << i + 1 << ":\n";
        cout << "Name: " << employee[i].name << endl;
        cout << "Roll Number: " << employee[i].roll << endl;
        cout << "Grade: " << employee[i].grade << endl;
    }

    return 0;
}

