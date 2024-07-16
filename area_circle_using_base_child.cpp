#include<iostream>
using namespace std;
class shape
{
    public: int radius;
    public :void setradius(int r)
    {
        radius=r;

    }

};
class circle:public shape
{
    public:int getarea()
    {
        return (3.14*radius*radius);

    }
};

int main()
{
    circle C;
    cout<<"enter the radius"<<endl;
    cin>>C.radius;

    cout<<"Total area:"<<C.getarea()<<endl;
    return 0;
}

