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

class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "fourwheeler" << endl;
    }
};

class car : public vehicle, public fourwheeler
{

};

int main()
{
    car obj;
    return 0;
}
