//error
#include<iostream>
using namespace std;
class A {
private:
    int x;
public:
    void fun()
    {
        return 2*x;
    }
    };
    int main()
    {
    A a;
    a.x=70;
    cout<<a.fun()<<endl;
    cout<<a.x<<endl;
    return 0;
    }

// *** correct program**
    #include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    void setX(int value) {
        x = value;
    }

    int getX() {
        return x;
    }

    int fun() {
        return 2 * x;
    }
};

int main() {
    A a;
    a.setX(70); // Set the value of x using a public method
    cout << a.fun() << endl; // Call the fun method to use x
    cout << a.getX() << endl; // Get the value of x using a public method
    return 0;
}





