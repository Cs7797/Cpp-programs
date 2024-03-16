#include <iostream>
#include <ctype.h>
using namespace std;
void divide(float x,float y)
{
    try
    {
        if(isalpha(y))
        {
           throw 'x';
        }
        else if(y!=0)
        {
            cout<<x/y<<endl;
        }
        else if(y==0)
        {
            throw 1.0;
        }
       
        
    }
    catch(char i)
    {
        cout<<"exception encountered ";   
        
    }
    catch(double i)
    {
        cout<<"div by 0 not possible ";   
        
    }
    
}
int main()
{

    divide(5.0,0);
    divide(10.0,'c');
    return 0;
}