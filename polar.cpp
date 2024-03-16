#include<iostream>
#include<math.h>
using namespace std;

class polar{
    float a,r,x,y;
    public:
    polar()
    {
        a=0;r=0;x=0;y=0;
    }
    polar(float f,float b)
    {
        a=f;r=b;
        x=0;y=0;
    }
    void get()
    {
        cout<<"enter angle";
        cin>>a;
        cout<<"enter radius";
        cin>>r;
    }
    void display()
    {
        cout<<"angle--"<<a<<endl;
        cout<<"radius--"<<r<<endl;
    }
    polar operator+(polar m)
    {
        polar c;
        x=r*cos(a);
        m.x=m.r*cos(m.a);
        m.y=m.r*sin(m.a);
        y=r*sin(a);
        c.x=x+m.x;
        c.y=y+m.y;
        c.a=atan(c.y/c.x);
        c.r=sqrt(c.x*c.x+c.y*c.y);
        return c;
    }
};
int main()
{
    polar a(5,30);
    polar b(10,60);
    polar c;
    c=a+b;
    c.display();
}