#include<iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "vehicle" << endl;
    }
};

class fourwheeler:public vehicle
{
public:
    fourwheeler()
    {
        cout << "fourwheeler" << endl;
    }
};

class car :  public fourwheeler
{
    public:car()
    {
        cout<<"car has 4 wheels"<<endl;
    }

};

int main()
{
    car obj;
    return 0;
}

