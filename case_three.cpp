#include<iostream>
using namespace std;

class A
{
static int x;
public:
    static int y;
    void fun(int x)
    {
        cout<<"value of static variable is:"<<A::x;
        cout<<"value of local variable is:"<<x;
    }};
    int A::x=1;
    int A::y=2;
    int main()
    {


    A obj;
    int x=10;
    obj.fun(x);
    cout<<"\n A;;y="<<A::y;
    return 0;
    }
