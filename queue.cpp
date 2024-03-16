#include<iostream>
using namespace std;
struct student{
    int roll;
    char name[20];
    student *next;
};
class queue
{
    public:
    student *end;
    student *base;
    queue()
    {
        end=NULL;
        base=NULL;
    }
    void enter()
    {
        student *ptr=new student();
        cout<<"enter roll";
        cin>>ptr->roll;
        fflush(stdin);
        cout<<"enter name";
        cin.getline(ptr->name,20);
        ptr->next=NULL;
        if(base==NULL)
        {
            base=ptr;
            end=ptr;
        }
    
        else
        {
            end->next=ptr;
            end=ptr;
        }
    }
    void pop()
    {
        if(base==NULL)
        {
            cout<<"underflow";
        }
        else
        {
            student *ptr=base;
            base=base->next;
            delete ptr;
        }
     }
    void display()
    {
        student *ptr=base;
        while(ptr)
        {
            cout<<"name--"<<ptr->name<<endl;
            cout<<"roll--"<<ptr->roll<<endl;
            ptr=ptr->next;

        }
    }
};
int main()
{
    int i;
    int ch;
    queue a;
    while(1)
    {
        cout<<"enter 1 to initialize"<<endl;
        cout<<"enter 2 to pop"<<endl;
        cout<<"enter 3 to display"<<endl;
        cout<<"enter 4 to exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            a.enter();
            break;
            case 2:
            a.pop();
            break;
            case 3:
            a.display();
            break;
            case 4:
            exit(0); 
        }
    }
    return 0;
}