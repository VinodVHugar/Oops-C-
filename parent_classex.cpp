#include<iostream>
using namespace std;
class Animal
{
    public: void eat()
    {
        cout<<"eating"<<endl;
    }
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }

};
class Dog:public Animal
{
    public:void bark()
    {
        cout<<"barking"<<endl;
    }
};
int main()
{
    Dog D;
    D.eat();
    D.sleep();
    D.bark();
    return 0;

}

