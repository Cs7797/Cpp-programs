#include<iostream>
#include<math.h>
using namespace std;
class acc{
    public:
    char name[20];
    float balance;
    int accno;
    void getdata()
    {
        cout<<"enter account number";
        cin>>accno;
        fflush(stdin);
        cout<<"enter account name";
        cin.getline(name,20);
        cout<<"enter account balance";
        cin>>balance;
    }
    void putdata()
    {
        cout<<" account number--"<<accno<<"\n";
        cout<<" account name--"<<name<<"\n";
        cout<<" account balance--"<<balance<<"\n";
    }
};
class savings:public acc
{
    
    public:
    float interest1,time,n,rate;
    void getdata()
    {
        acc::getdata();
    }
    void putdata()
    {
        acc::putdata(); 
        cout<<"type--savings";
    }
    void withdraw(int x)
    {
        if(x==accno)
        {   int y;
            cout<<"enter the amount";
            cin>>y;
            if(balance<x)
            {
                cout<<"insufficient balance";
            }
            else
            {
                balance-=y;
                cout<<"succesfull";
                cout<<"balance--"<<balance;
            }

        }
    }
    void deposit(int x)
    {
        if(x==accno)
        {    int y;
            cout<<"enter the amount";
            cin>>y;
            balance+=y;
            cout<<"succesfull";
            cout<<"balance--"<<balance;
        }
    }
    void interest(int x)
    {
        if(x==accno)
        {
            cout<<"enter rate of interst";
            cin>>rate;
            cout<<"enter no of occurences within period";
            cin>>n;
            cout<<"enter the time period";
            cin>>time;
            interest1=balance*pow((1 + rate/n), (n*time));
            balance+=interest1;
            cout<<"balance--"<<balance<<"\n";
            cout<<"interest--"<<interest1;
        }
    }
};
class current:public acc
{
    
    public:
    void getdata()
    {
        acc::getdata();
    }
    void putdata()
    {
        acc::putdata();
        cout<<"type--current";
    }
    void withdraw(int x)
    {
        if(x==accno)
        {   int y;
            cout<<"enter the amount";
            cin>>y;
            if(balance<x)
            {
                cout<<"insufficient balance";
            }
            else
            {
                balance-=y;
                cout<<"succesfull";
                cout<<"balance--"<<balance;
            }

        }
    }
    void deposit(int x)
    {
        if(x==accno)
        {    int y;
            cout<<"enter the amount";
            cin>>y;
            balance+=y;
            cout<<"succesfull";
            cout<<"balance--"<<balance;
        }
    }
    void min(int x)
    {
        if(balance<1000)
        {
            cout<<"low balance,penalty imposed";
            balance-=100;
        }
    }
};
int main()
{
    savings a[5];
    current b[5];
    int i,ch,y,z;
    char t;
    while(true)
    {
    cout<<"enter 1 to initialize"<<"\n";
    cout<<"enter 2 to display"<<"\n";
    cout<<"enter 3 to withdraw"<<"\n";
    cout<<"enter 4 to deposit"<<"\n";
    cout<<"enter 5 to check minimum balance"<<"\n";
    cout<<"enter 6 to calculate interest"<<"\n";
    cout<<"enter 7 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"enter the no of accounts in each";
            cin>>y;
            cout<<"enter s for saving or c for current";
            cin>>t;
            if(t=='s')
            {   for(i=0;i<y;i++)
                {
                a[i].getdata();
                }
            }   
            if(t=='c')
            {   for(i=0;i<y;i++)
                {
                b[i].getdata();
                }
            }    
            break;
        case 2:
            cout<<"enter s for saving or c for current";
            cin>>t;
            if(t=='s')
            {   for(i=0;i<y;i++)
                {
                a[i].putdata();
                }
            }   
            if(t=='c')
            {   for(i=0;i<y;i++)
                {
                b[i].putdata();
                }
            }    
            break;
        case 3:
            cout<<"enter s for saving or c for current";
            cin>>t;
            cout<<"enter the acc no";
            cin>>z;
            if(t=='s')
            {   for(i=0;i<y;i++)
                {
                a[i].withdraw(z);
                }
            }   
            if(t=='c')
            {   for(i=0;i<y;i++)
                {
                b[i].withdraw(z);
                }
            }
            break;    
        case 4 :
            cout<<"enter s for saving or c for current";
            cin>>t;
            cout<<"enter the acc no";
            cin>>z;
            if(t=='s')
            {   for(i=0;i<y;i++)
                {
                a[i].deposit(z);
                }
            }   
            if(t=='c')
            {   for(i=0;i<y;i++)
                {
                b[i].deposit(z);
                }
            }    
            break;
        case 5:
            cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
                b[i].min(z);
            }
            break;
        case 6:
            cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
                a[i].interest(z);
            }
            break;    
        case 7:
            exit(0);    
    }
    }    
}
