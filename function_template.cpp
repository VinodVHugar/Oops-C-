#include <iostream>
using namespace std;
template<typename T>
T add(T num1,T num2)
{
    return( num1 = num2);

}
int main()
{
    int res1;
    double res2;
    //calling add()with int parameter
res1=add<int>(2,3);
cout<<res1<<endl;
//calling add()with float parameter
res2=add<float>(2,3);
cout<<res2<<endl;
return 0;
}
