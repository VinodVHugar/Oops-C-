#include<iostream>
using namespace std;
class A
{
    public:
    string name;
    char grade;
    int roll;
};
int main()
{
    A a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"enter  \n name:\n roll:\ngrade:"<<endl;
        cin>> a[i].name>>a[i].roll>>a[i].grade;

    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i].name<<a[i].roll<<a[i].grade;
    }
}
