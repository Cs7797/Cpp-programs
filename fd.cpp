#include<iostream>
using namespace std;
class fd{
    int acc_no;
    public:
    char name[20];
    int amount;
    float tenure,time_passed;
    void initialize();
    void withdraw(int z);
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
    cout<<"enter the totaltenure in years";
    cin>>tenure;
    cout<<"enter the tenure passed in years";
    cin>>time_passed;
}
void fd::withdraw(int z)
{
    if(z==acc_no)
    {
        if(time_passed>(tenure)/2)
        {
            cout<<"withdraw succesfull\n";
            amount=0;
        }
        else
        {
            cout<<"cannot withdraw\n";
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
        cout<<" total tenure in years"<<tenure<<"\n";
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
    cout<<"enter 3 to display"<<"\n";
    cout<<"enter 4 to exit"<<"\n";
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
        case 3 :
             cout<<"enter the acc no";
            cin>>z;
            for(i=0;i<y;i++)
            {
              a[i].display(z);
            }
            break;
        case 4:
            exit(0);
    }
    }    
}