#include<iostream>
using namespace std;
class distance1{
    public:
    int m;
    int cm;
};
class room{
    public:
    distance1 len,height,width,area;
    void initialize();
    void area1();
    void display();
};
void room::initialize()
{
    cout<<"enter length";
    cin>>len.m>>len.cm;
    cout<<"enter height";
    cin>>height.m>>height.cm;
    cout<<"enter width";
    cin>>width.m>>width.cm;
}
void room::area1()
{
    area.m=len.m*width.m;
    area.cm=len.cm*width.cm;
    cout<<"area is-"<<area.m<<"m and "<<area.cm<<"cm\n";

}
void room::display()
{
    cout<<"length is-"<<len.m<<"m and "<<len.cm<<"cm\n";
    cout<<"width is-"<<width.m<<"m and "<<width.cm<<"cm\n";
    cout<<"height is-"<<height.m<<"m and "<<height.cm<<"cm\n";
    cout<<"area is-"<<area.m<<"m and "<<area.cm<<"cm\n";
}
int main()
{
    int ch;
    room a;
    while(true)
    {
    cout<<"enter 1 to initialize"<<"\n";
    cout<<"enter 2 to calculate area"<<"\n";
    cout<<"enter 3 to display"<<"\n";
    cout<<"enter 4 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            a.initialize();
             break;
        case 2:
            a.area1();
            break;
        case 3:
            a.display();
            break;
        case 4:
            exit(0);
    }
    }
    return 0;
   
}