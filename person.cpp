#include<iostream>
using namespace std;
class person{
    public:
    char name[20],phone[10];
    void setdata()
    {
        cout<<"enter the name";
        cin.getline(name,20);
        cout<<"enter the phone no";
        cin.getline(phone,10);
    }
    void getdata()
    {
        cout<<"name--"<<name<<endl;
        cout<<"phone--"<<phone<<endl;
    }
    ~person()
    {
        cout<<"destructor called";
    }
};
class spouse:public person
{
    
    public:
    char spousename[20];
    void setdata()
    {
        person::getdata();
        cout<<"enter spousename";
        cin.getline(spousename,20);
    }
    void display()
    {
        person::getdata();
        cout<<"spousename--"<<spousename<<endl;
    }       
};
int main()
{
    int ch,b,i;
    spouse a[10];
    while(1)
    {
        cout<<"enter 1 to initialize "<<endl;
        cout<<"enter 2 to display"<<endl;
        cout<<"enter 3 to exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"enter no of records";
            cin>>b;
            for(i=0;i<b;i++)
            {

                cout<<"enter name";
                cin.getline(a[i].name,20);
                cout<<"enter phone no";
                cin.getline(a[i].phone,10);
                cout<<"enter spouse name";
                cin.getline(a[i].spousename,20);
            }
            break;
            case 2:
                for(i=0;i<b;i++)
            {
                a[i].display();
            }
            break;
            case 3:
            exit(0);
            
        }    

    }
}
