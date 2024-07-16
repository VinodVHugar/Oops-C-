#include<iostream>
using namespace std;

class A
{
protected:
    int x;
public:
    A() {x=10;}
};
class B
{
protected:
    int x;
public:
    B(){x=20;}
};
class C :public A,public B
{
public:
    void fun()
    {
        cout<<"\nA's x:"<<A::x;
         cout<<"\nB's x:"<<B::x;
    }
};
int main()
{
    C c;
    c.fun();
    return 0;
}


