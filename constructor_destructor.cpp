#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    void displayMessage() {
        cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Call a method on the object
    obj.displayMessage();

    // The destructor is automatically called when 'obj' goes out of scope at the end of 'main'

    return 0;
}
