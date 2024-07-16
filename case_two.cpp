#include<iostream>
using namespace std;

class A
{
public:
    void fun();
};
void A::fun()
{
    cout<<"this is oops class";
}
int main ()
{
    A a;
    a.fun();
    return 0;
}
