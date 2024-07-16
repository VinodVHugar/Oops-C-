#include<iostream>
using namespace std;
class A{
static int x;
public:
    static int increment ()
    {
        return ++x;
    }
};
int A::x=1;
int main()
{
    A a;
    cout<<a.increment();
    return 0;
}
