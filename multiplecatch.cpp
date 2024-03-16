#include<iostream>
using namespace std;
void test(int x)
{
    try
   {
        if (x==0)
        throw 1;
        else if (x==1)
        throw '1';
        else if(x==2)
        throw 1.0;
   }
   catch(int i)
   {
        cout<<"caught an integer"<<endl;
   }
   catch(char i)
   {
    cout<<"caught a character"<<endl;
   }
   catch (double i)
   {
    cout<<"caught a float val"<<endl;
   }    
}
int main()
{
    test(0);
    test(1);
    test(2);
    return 0;
}