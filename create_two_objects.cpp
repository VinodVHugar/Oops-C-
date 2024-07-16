#include<iostream>
using namespace std;

class myclass
{
public:
    int mynum;
    string mystring;
};

int main()
{
    myclass myobj1;
    myobj1.mynum = 10;
    myobj1.mystring = "Object 1";

    myclass myobj2;  // Create a second object
    myobj2.mynum = 20;
    myobj2.mystring = "Object 2";

    // Display "Hello"
    cout << "Hello" << endl;

    // Print the attributes of the first object
    cout << "Object 1 Attributes:" << endl;
    cout << "Number: " << myobj1.mynum << endl;
    cout << "String: " << myobj1.mystring << endl;

    // Print the attributes of the second object
    cout << "Object 2 Attributes:" << endl;
    cout << "Number: " << myobj2.mynum << endl;
    cout << "String: " << myobj2.mystring << endl;

    return 0;
}

