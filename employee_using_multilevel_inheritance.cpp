#include<iostream>
using namespace std;

class organization
{
 public:int salary;
        string name;

};

class employee:public organization
{
public:void setsalary(int s)
    {
     salary =s;
    }
    void setname(string n)
    {
        name = n;
    }
};
class no_of_employee:  public employee
{
   public:int getsalary()
   {
       return salary;
   }
   string getname()
   {
       return name;
   }
};

int main()
{
   no_of_employee N;
   int s;
   string n;
   cout<<"enter name and salary"<<endl;
   cin>>n;
   cin>>s;
   N.setname(n);
   N.setsalary(s);
   cout<<"name:"<<N.getname()<<endl;
   cout<<"salary:"<<N.getsalary()<<endl;
   return 0;

}

