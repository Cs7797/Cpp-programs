#include<iostream>
using namespace std;

struct complex{
    int real;
    int img;

};
complex fn1(complex x,complex y);
//complex fn2(complex x,complex y);

int main()
{
    complex a;
    complex b,c;
    int z;
    cout<<"enter the 1st real part";
    cin>>a.real;
    cout<<"enter 1st img part";
    cin>>a.img;
    cout<<"enter 2 nd real part";
    cin>>b.real;
    cout<<"enter 2 img part";
    cin>>b.img;
    c=fn1(a, b);
    cout<<"the ans is"<<c.real<<"  "<<c.img;
    return 0;
}
complex fn1(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    
    return c;

}