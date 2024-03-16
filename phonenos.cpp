#include<iostream>
using namespace std;
struct phone{
    int area;
    int exchange;
    int number;
};
struct customer{
    char name[20];
    int member;
    phone phoneno;

};
void display();
customer data1[20];
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter the name";
        cin>>data1[i].name;
        cout<<"enter the member no";
        cin>>data1[i].member;
        cout<<"enter the phone area code";
        cin>>data1[i].phoneno.area;
        cout<<"enter the phone exchange";
        cin>>data1[i].phoneno.exchange;
        cout<<"enter the number";
        cin>>data1[i].phoneno.number;
        
    }
    display();
    return 0;
}
void display(){
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\nname-"<<data1[i].name;
        cout<<"\nmember no-"<<data1[i].member;
        cout<<"\nphoneno-"<<data1[i].phoneno.area<<data1[i].phoneno.exchange<<data1[i].phoneno.number;
        cout<<"\n";
    }
}