#include<iostream>
using namespace std;
class pub{
    float price;
    char title[20];
    public:
    void getdata()
    {
        fflush(stdin);
        cout<<"enter title";
        cin.getline(title,20);
        cout<<"enter price";
        cin>>price;
    }
    void putdata()
    {
        cout<<"title--"<<title<<"\n";
        cout<<"price--"<<price<<"\n";
    }
};
class book:public pub
{
    int pages;
    public:
    void getdata()
    {
        pub::getdata();
        cout<<"enter pages";
        cin>>pages;
    }
    void putdata()
    {
        pub::putdata();
        cout<<"pages--"<<pages<<"\n";
    }
};
class tape:public pub
{
    float time;
    public:
    void getdata()
    {
        pub::getdata();
        cout<<"enter time in minutes";
        cin>>time;
    }
    void putdata()
    {
        pub::putdata();
        cout<<"time--"<<time<<"\n";
    }
};
int main()
{
    book a;
    tape b;
    int ch;
    while(1)
    {
        cout<<"enter 1 to create a book\n";
        cout<<"enter 2 to create tape\n";
        cout<<"enter 3 to display book\n";
        cout<<"enter 4 to display tape\n";
        cout<<"enter 5 to exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            a.getdata();
            break;
            case 2:
            b.getdata();
            break;
            case 3:
            a.putdata();
            break;
            case 4:
            b.putdata();
            break;
            case 5:
            exit(0);
        }
    }
}