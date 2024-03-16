#include<iostream>
using namespace std;
class person{
    public:
    char name[20];
    int code;
    void display()
    {
        cout<<" name"<<name<<endl;
        cout<<" code"<<code<<endl;
    }

};
class accounts:virtual public person
{
    public:
    float pay;
    void update1(int x)
    {
        if(x==code)
        {
        cout<<"enter new pay";
        cin>>pay;
        }
    }
};
class admin:virtual public person
{
    public:
    float experience;
    void update(int x)
    {
        if(x==code)
        {
        cout<<"enter new experience";
        cin>>experience;
        }
    }
};
class master:public accounts,public admin
{
    public:
    void initialize()
    {
        fflush(stdin);
        cout<<"enter name";
        cin.getline(name,20);
        cout<<"enter code";
        cin>>code;
        cout<<"enter pay";
        cin>>pay;
        cout<<"enter experience in years";
        cin>>experience;

    }
    void display()
    {
       cout<<" name"<<name<<endl;
       cout<<" code"<<code<<endl;
       cout<<"pay--"<<pay<<endl;
       cout<<"experience--"<<experience<<"years"<<endl;
    }
};
int main()
{
    int i,ch,b,z;
    master a[10];
    cout<<"enter the no of records";
    cin>>b;
    while(1)
    {
        cout<<"enter 1 to initialize "<<endl;
        cout<<"enter 2 to update pay"<<endl;
        cout<<"enter 3 to update experience"<<endl;
        cout<<"enter 4 to display"<<endl;
        cout<<"enter 5 to exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            for(i=0;i<b;i++)
            {   
                a[i].initialize();
            }
            break;
            case 2:
            cout<<"enter employee code";
            cin>>z;
            for(i=0;i<b;i++)
            {
                a[i].update1(z);
            }
            break;
            case 3:
            cout<<"enter employee code";
            cin>>z;
            for(i=0;i<b;i++)
            {
                a[i].update(z);
            }
            break;
            case 4:
            for(i=0;i<b;i++)
            {
                a[i].display();
            }
            case 5:
            exit(0);

            
        }
    }
    return 0;
}
