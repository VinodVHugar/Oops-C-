#include<iostream>
using namespace std;
class parent
{
    public: int id_p;
};
class child :public parent
{
    public:int id_c;

};
int main()
{
child obj;
cout<<"enter the child id"<<endl;
cin>>obj.id_p>>obj.id_c;
//obj.id_p=10;
//obj.id_c=100;
cout<<"child id is"<<obj.id_c<<endl;
cout<<"parent id is"<<obj.id_p<<endl;
return 0;
}
