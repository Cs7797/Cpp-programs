#include<iostream>
using namespace std;
class vector{
    public:
    int n[20];
    int len;
    void initialize();
    void modify();
    void multiply();
    void display();
    friend void add1(vector a,vector b);
};
void vector::initialize()
{
    int i;
    cout<<"enter no of elements ";
    cin>>len;
    for(i=0;i<len;i++)
    {
        cout<<"enter the elemnts";
        cin>>n[i];
    }
}
void vector::modify()
{
    int f,j;
    cout<<"enter the element no to be modified";
    cin>>f;
    cout<<"enter the new value";
    cin>>j;
    n[f+1]=j;
    cout<<"succsessful\n";
}
void vector::multiply()
{
    int l,i;
    cout<<"enter the scalar";
    cin>>l;
    for(i=0;i<len;i++)
    {
        n[i]*=l;
    }
}
void vector::display()
{
    int i;
    cout<<"(";
    for(i=0;i<len;i++)
    {
        cout<<n[i]<<",";
    }
    cout<<")";
}
void add1(vector a,vector b)
{
    int i;
    vector c;
    for(i=0;i<a.len;i++)
    {
        c.n[i]=a.n[i]+b.n[i];
    }
    cout<<"(";
    for(i=0;i<a.len;i++)
    {
        cout<<c.n[i]<<",";
    }
    cout<<")";
}
int main()
{
    vector a[2];
    int ch;
    while(true){
    cout<<"enter 1 to initialize 1st array"<<"\n";
    cout<<"enter 2 to initialize 2nd array"<<"\n";
    cout<<"enter 3 to add"<<"\n";
    cout<<"enter 4 to display\n";
    cout<<"enter 4 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        a[1].initialize();
        break;
        case 2:
        a[2].initialize();
        break;
        case 3:
        add1(a[1],a[2]);
        break;
        case 4:
        int h;
        cout<<"enter vector to be displayed";
        cin>>h;
        a[h].display();
        break;
        case 5:
        exit(0);
        
    }
    }
    return 0;
}