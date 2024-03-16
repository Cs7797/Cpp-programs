#include<iostream>
using namespace std;
class mat{
    int m,n;
    int p[10][10];
    public:
    void get()
    {
        cout<<"enter no of rows and columns";
        cin>>m>>n;
        cout<<"enter elements";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<p[i][j];
            }
            cout<<"\n";
        }
    }
    mat operator+(mat b)
    {
        mat c;
        c.m=m;
        c.n=n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                c.p[i][j]=p[i][j]+b.p[i][j];
            }
        }
        return c;
    }
    friend mat operator-(mat a,mat b)
    {
        mat c;
        c.m=a.m;
        c.n=a.n;
        for(int i=0;i<a.m;i++)
        {
            for(int j=0;j<a.n;j++)
            {
                c.p[i][j]=a.p[i][j]-b.p[i][j];
            }
        }
        return c;
    }
    friend mat operator*(mat a,mat b)
    {   
        mat c;
        c.m=a.m;
        c.n=a.n;
         for(int i=0;i<a.m;i++)
        {
            for(int j=0;j<a.n;j++)
            {
                c.p[i][j]=0;
                for(int k=0;k<a.m;k++)
                {
                    c.p[i][j]+=a.p[i][k]*b.p[k][j];
                }
            }
        }
        return c;
    }
};
int main()
{
    mat a,b,x;
    a.get();
    b.get();
    x=a+b;
    x.display();
    
}