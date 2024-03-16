#include<iostream>
using namespace std;
class db;
class dm{
    float cm,m;
    public:
    friend void add(dm x,db y);
    void initialize();
};
class db{
    float feet,inches;
    public:
    friend void add(dm x,db y);
    void initialize1();
};
void add(dm x,db y)
{
    char c;
    cout<<"enter f for feet inches and m for meter centimeters";
    cin>>c;
    if(c=='f')
    {
        x.cm+=x.m*100;
        x.cm/=2.54;
        y.inches+=x.cm;
        while(y.inches>12)
        {
            y.inches-=12;
            y.feet++;
        }
        cout<<y.feet<<"feet and"<<y.inches<<"inches";
        
    }
    else if(c=='m')
    {
        y.feet*=30.48;
        y.inches*=2.54;
        x.cm=y.feet+y.inches;
        while(x.cm>100){
            x.cm-=100;
            x.m++;
        }
        cout<<x.m<<"metres and"<<x.cm<<"centimeters";
    }
}
void dm::initialize()
{
    cout<<"enter distance in m";
    cin>>m;
    cout<<"enter distance in cm";
    cin>>cm;
}
void db::initialize1()
{
    cout<<"enter distance in feet";
    cin>>feet;
    cout<<"enter distance in inches";
    cin>>inches;
}
int main()
{
    dm a;
    db b;
    int ch;
    while(true)
    {
    cout<<"enter 1 to initialize dm"<<"\n";
    cout<<"enter 2 to initialize db"<<"\n";
    cout<<"enter 3 to add"<<"\n";
    cout<<"enter 4 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        a.initialize();
        break;
        case 2:
        b.initialize1();
        break;
        case 3:
        add(a,b);
        break;
        case 4:
        exit(0);
    }
    }
    return 0;
}