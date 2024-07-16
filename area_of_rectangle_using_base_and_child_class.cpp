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
class Rectangle:public shape
{
    public:int getarea()
    {
        return (width * height);

    }
};

int main()
{
    Rectangle R;
    cout<<"enter the width and height"<<endl;
    cin>>R.width>>R.height;
    //R.setwidth(5);
    //R.setheight(7);
    cout<<"Total area:"<<R.getarea()<<endl;
    return 0;
}
