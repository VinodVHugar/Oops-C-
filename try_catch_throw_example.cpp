#include<iostream>
using namespace std;
int main()
{
    double numerator,denominator,arr[4]={0.0,0.0,0.0,0.0};
    int index;
    cout<<"enter array index:";
    cin>>index;
    try
    {
    //throw exception if array out of bounds
    if (index >= 4)
    throw"Error:Array out of bounds!";

    //not executed if array is out of bounds
    ...............
    ...................




















    //catch"array out of bounds"exception
    catch(const char* msg)
    {
        cout<<msg<<endl;
    }
    //catch "divide by 0"exception
    catch(int num)
    {
        cout<<"Error:cannot divide by"<<num<<endl;
    }
    //catch any other exception
    catch{.....}{
    cout<<"unexpected exceptional"<<endl;

    }
    return 0;
}
