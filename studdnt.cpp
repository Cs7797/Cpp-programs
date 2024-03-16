#include <iostream>
#include <list>
#include <string>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    void initialize()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter roll";
        cin>>roll;
    }
    void display1()
    {
        cout<<name<<endl;
        cout<<roll<<endl;
    }

};
void display(list <student> x)
{
    list<student>::iterator p;
    for(p=x.begin();p!=x.end();p++)
    {
        p->display1();
    }
}
void find1(list <student> x)
{
    char ch;
    cout<<"enter a to find by name and b to find by roll";
    cin>>ch;
    if(ch=='a')
    {
        string str;
        cout<<"enter name";
        cin>>str;
        list<student>::iterator p;
        for(p=x.begin();p!=x.end();p++)
        {
            if(p->name==str)
            {
                cout<<p->roll;
            }
        }

    }
    else if(ch=='b')
    {
        int str;
        cout<<"enter roll";
        cin>>str;
        list<student>::iterator p;
        for(p=x.begin();p!=x.end();p++)
        {
            if(p->roll==str)
            {
                cout<<p->name;
            }
        }

    }
}
int main()
{
    student s[5];
    list <student> l(5);
    for(int i=0;i<5;i++)
    {
        s[i].initialize();
        l.push_back(s[i]);
    }
    display(l);
    find1(l);
    return 0;
    
}