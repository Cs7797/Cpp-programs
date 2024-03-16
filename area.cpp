#include<iostream>
#define pi 3.14
using namespace std;
class shape{
    public:
    double a,b,area;
    void getdata()
    {
        cout<<"enter first dimension";
        cin>>a;
        cout<<"enter 2 dimension";
        cin>>b;
    }
    virtual void displayarea()
    {
        area=a*b;
        cout<<area;
    }
    shape()
    {
        a=0;
        b=0;
    }
   
    

};
class rectangle:public shape
{
    public:
    void displayarea()
    {
        shape::displayarea();
    }
};
class triangle:public shape{
    public:
    void displayarea()
    {
        area=0.5*(a*b);
        cout<<area;
        
    }
};
class circle:public shape{
    public:
    void displayarea()
    {
        area=pi*a*a;
        cout<<area;
    }
    circle(double x)
    {
        a=x;
        b=0;
    }
};

int main()
{
    shape a;
    rectangle b;
    triangle c;
    shape *ptr;
    ptr=&a;

    int z;
    cout<<"1 for rectangle 2 for triangle 3 FOR CIRCLE";
    cin>>z;
    if(z==1)
    {   ptr=&b;
        ptr->getdata();
     
        ptr->displayarea();
    }
    else if(z==2)
    {
        ptr=&c;
        ptr->getdata();
        
        ptr->displayarea();
    }
    else if(z==3)
    {
        double l;
        cout<<"enter radius";
        cin>>l;
        circle d(l);
        ptr=&d;
        ptr->displayarea();
    }
    return 0;
}