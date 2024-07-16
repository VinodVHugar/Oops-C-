#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }

    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog myDog;
    Cat myCat;

    // Calling methods from the base class
    myDog.eat();
    myDog.sleep();

    // Calling methods from the derived class
    myDog.bark();

    cout << endl;

    // Calling methods from the base class
    myCat.eat();
    myCat.sleep();

    // Calling methods from the derived class
    myCat.meow();

    return 0;
}
