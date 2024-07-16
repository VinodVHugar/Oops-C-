#include <iostream>
using namespace std;
class A {
public:
    int x;

    A() {
        x = 0;
    }
};
class B : public A {
public:
    B() {

        x = 5;
    }
};
class C {
public:
    int y;

    C() {
        y = 5;
    }
};
class D : public B, public C {
public:
    int sum() {
        return B::x + C::y;
    }
};

int main() {
    B objB;
    C objC;
    D objD;
    cout << "Sum of x and y: " << objD.sum() << endl;
    return 0;
}

