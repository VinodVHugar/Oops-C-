#include<iostream>
using namespace std;
class Base{
public:
virtual void print()
{
cout<<"create base class"<<endl;
}};
class Derived:public Base{
public:
void print()
{
cout<<"child class created"<<endl;
}};
int main(){

Derived d1;
Base *Base1=&d1;
Base ->print();
return 0;}
