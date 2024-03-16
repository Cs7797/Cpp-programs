#include <iostream>
using namespace std;
template <class t> 
class arr
{
    t *x;
    public:
    arr(t *v)
    {
       x= new t[5];
        for(int i=0;i<5;i++)
        {
            x[i]=v[i];
        }
    }
    void min1()
    {
        t z;
        z=x[0];
        for(int i=0;i<5;i++)
        {
            if(x[i]<z)
            {
                z=x[i];
            }
        
        }
        cout<<z<<endl;
    }
    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<x[i];
        }
    }
};
int main()
{
    int z[5]={2,4,8,1,9};
    arr <int> k(z);
    k.display();
    k.min1();
    return 0;
}