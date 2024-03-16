#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter values of x and y";
    cin>>x>>y;
    try
    {
        if(y!=0)
        {
            cout<<x/y;
        }
        else
        throw y;
    }
    catch(int i)
    {
        cout<<"caught an exception";
    }
}