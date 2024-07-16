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
    myclass myobj;
    myobj.mynum = 10;
    cout << "Hello" << endl;
    cout << myobj.mynum << endl;
    cout << myobj.mystring << endl;

    return 0;
}
