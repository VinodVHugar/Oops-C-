#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:

    MyClass() {
        data = 0;
    }


    MyClass(int initialValue) {
        data = initialValue;
    }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {

    MyClass obj1;
    MyClass obj2(2);


    obj1.displayData();
    obj2.displayData();

    return 0;
}

