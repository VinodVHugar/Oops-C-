#include<iostream>
using namespace std;
class shape
{
    public: int width, height;
    public :void setwidth(int w)
    {
        width=w;

    }
    void setheight(int h)
    {
        height=h;
    }
};
class triangle:public shape
{
    public:int getarea()
    {
        return (0.5*width * height);

    }
};

int main()
{
    triangle t;
    cout<<"enter the width and height"<<endl;
    cin>>t.width>>t.height;
    //R.setwidth(5);
    //R.setheight(7);
    cout<<"Total area:"<<t.getarea()<<endl;
    return 0;
}

