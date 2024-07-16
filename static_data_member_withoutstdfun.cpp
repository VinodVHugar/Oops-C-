#include <iostream>

class A {
    static int x;

public:
    static int increment() {
        return ++x;
    }
};

int A::x = 1;

int main() {
    A a;
    int result = a.increment();
    std::ostream& output = std::cout; // Create a reference to std::cout
    output << result; // Use the reference to print the result
    return 0;
}

