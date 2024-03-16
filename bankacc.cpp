#include<iostream>
using namespace std;
class fd{
    int acc_no;
    public:
    char name[20],type[10];
    int amount;
    void initialize();
    void withdraw(int z);
    void deposit(int z);
    void display(int z);
};
void fd::initialize()
{
    cout<<"enter account number";
    cin>>acc_no;
    fflush(stdin);
    cout<<"enter account name";
    cin.getline(name,20);
    
    cout<<"enter account balance";
    cin>>amount;
    fflush(stdin);
    cout<<"enter the type of in acc";
    cin.getline(type,10);
   
}
void fd::withdraw(int z)
{
    if(z==acc_no)
    {
        int k;
        {
            cout<<"enter amount to be withdrawed";
            cin>>k;
            cout<<"withdraw succesfull\n";
            amount-=k;
        }
    }
}
void fd::display(int z)
{
    if(z==acc_no)
    {
        cout<<"account number"<<acc_no<<"\n";
        cout<<"account name"<<name<<"\n";
        cout<<"enter account balance"<<amount<<"\n";
        cout<<" type of acc"<<type<<"\n";
    }

}
void fd::deposit(int z)
{
    if(z==acc_no)
    {
        int k;
        {
            cout<<"enter amount to be deposited";
            cin>>k;
            cout<<"deposit succesfull\n";
            amount+=k;
        }
    }
}
int main()
{
   int y,i,ch,z;
    fd a[10];
    while(true)
    {
    cout<<"enter 1 to initialize"<<"\n";
    cout<<"enter 2 to withdraw"<<"\n";
    cout<<"enter 3 to deposit"<<"\n";
    cout<<"enter 4 to display"<<"\n";
    cout<<"enter 5 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"enter the no of accounts";
            cin>>y;
            for(i=0;i<y;i++)
            {
               a[i].initialize();
            }
            break;
        case 2:
            cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
              a[i].withdraw(z);
            }
            break;
        case 3:
            cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
              a[i].deposit(z);
            }
            break;
        case 4 :
             cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
              a[i].display(z);
            }
            break;
        case 5:
            exit(0);
    }
    }    
}