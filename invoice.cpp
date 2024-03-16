#include<iostream>
using namespace std;
class item;
class customer;
class date{
    public:
    int d,m,y;
    void date1();
    friend void invoice(date a,customer c);
};
class item{
    public:
    int itemno,quantity;
    char description[20];
    float discount,tax,unitprice,x;
    float item1();
    void display();
    friend void invoice(date a,customer c);
    item()
    {
        tax=18.0;
        discount=5.0;
    }
};
class customer{
    public:
    char name[20],address[20],phone[20];
    void customer1();
    friend void invoice(date a,customer c);
};
void date::date1()
{
    cout<<"enter the date in dd mm yy";
    cin>>d>>m>>y;
}
float item::item1()
{
    int i;
    cout<<"item no";
    cin>>itemno;
    fflush(stdin);
    cout<<"description";
    cin.getline(description,20);
    cout<<"unit price";
    cin>>unitprice;
    cout<<"quantity";
    cin>>quantity;
    x=unitprice*quantity;
    return x;
}

void customer::customer1()
{
    cout<<"name";
    cin.getline(name,20);
    cout<<"number";
    cin.getline(phone,10);
    cout<<"address";
    cin.getline(address,20);
   
}
void item::display()
{       
    cout<<"itemno"<<"\t"<<"description"<<"\t"<<"unitprice"<<"\t"<<"quantity"<<"\n";
    cout<<itemno<<"\t"<<description<<"\t"<<unitprice<<"\t"<<quantity<<"\n";
}
void invoice(date a,customer c)
{
    int i;
    cout<<"\n\n\n";
    cout<<"\t\t\t\t INVOICE\n";
    cout<<a.d<<"-"<<a.m<<"-"<<a.y<<"\n";
    cout<<"name--"<<c.name<<"\n";
    cout<<" contact--"<<c.phone<<"\n";
    cout<<"address--"<<c.address<<"\n";
   
}
int main()
{
    int i,ch;
    int no;
    float price,n,x1;
    date d;
    item z[10];
    customer c;
    while(1)
    {
        cout<<"enter 1 to enter\n";
        cout<<"enter 2 to print\n";
        cout<<"enter 3 to exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            d.date1();
            fflush(stdin);
            c.customer1();
            cout<<"enter no of items";
            cin>>no;
            for(i=0;i<no;i++)
            {
                x1+=z[i].item1();
            }
            break;
            case 2:
            invoice(d,c);
            for(i=0;i<no;i++)
            {
                z[i].display();
            }
            price=x1-(x1*z[no].discount/100)+(x1*z[no].tax/100);
            cout<<"total\t"<<"tax\t"<<"discount\t"<<"\n";
            cout<<x1<<"\t\t"<<z[no].tax<<"\t\t"<<z[no].discount<<"\t\t";
            cout<<"----"<<price<<"\n";
            break;
            case 3:
            exit(0);
        }
    }
    return 0;
}
