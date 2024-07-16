#include<iostream>
using namespace std;
class A
{
int x=5;
public: void display()
{
cout<<"value of x is "<<x<<endl;
}
};
class B:public A
{
int y=10;
public: void display()
{
cout<<"value of  is "<<y<<endl;
}
};
int main(){
A * a;// pointer of base class
B b;//object of derived class
a=&b;
a->display();
return 0;}
