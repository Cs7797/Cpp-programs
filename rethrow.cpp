#include <iostream>
using namespace std;
void divide(int x,int y)
{
    try
    {
        if(y!=0)
        {
            cout<<x/y<<endl;
        }
        else{
            throw y;
        }
    }
    catch(int i)
    {
        cout<<"caught exception ";   
        throw;
    }
    
}
int main()
{
    try
    {
        divide(5,0);
    }
    catch(int i)
    {
        cout<<"caught rethrown exception";
    }
    return 0;
}