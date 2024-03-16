#include<iostream>
using namespace std;
class vector
{
    int v[3];
    public:
    vector();
    vector(int *x);
    friend vector operator*(int a,vector b);
    friend istream&  operator>>(istream&,vector&);
    friend ostream& operator<<(ostream&,vector&);
};
vector::vector()
{
    int i;
    for(i=0;i<3;i++)
    {
        v[i]=0;
    }
}
vector::vector(int *x)
{
    int i;
    for(i=0;i<3;i++)
    {
        v[i]=x[i];
    }
}
vector operator*(int a,vector b)
{
    int i;
    vector d;
    for(i=0;i<3;i++)
    {
        d.v[i]=a*b.v[i];
    }
    return d;
}
istream &operator>>(istream &din,vector &b)
{
    for(int i=0;i<3;i++)
    {
        din>>b.v[i];
    }
    return din;
}
ostream &operator<<(ostream &dout,vector &b)
{
    for(int i=0;i<3;i++)
    {
        dout<<b.v[i];
    }
    return dout;
}
int main()
{
    vector a,d;
    cin>>a;
    d=5*a;
    cout<<d;
    

}


