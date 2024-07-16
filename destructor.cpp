#include <iostream>
using namespace std;

class MyClass {
private:
    int* dynamicData;

public:
    // Constructor
    MyClass() {
        dynamicData = new int[5];
        for (int i = 0; i < 5; i++) {
            dynamicData[i] = i;
        }
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        delete[] dynamicData;
        cout << "Destructor called" << endl;
    }

    void displayData() {
        cout << "Dynamic Data: ";
        for (int i = 0; i < 5; i++) {
            cout << dynamicData[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj;
    obj.displayData();

    return 0;
}
