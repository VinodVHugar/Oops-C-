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

class bus:public vehicle
{

};

class car :  public vehicle
{


};

int main()
{
    bus obj1;
    car obj2;
    return 0;
}


