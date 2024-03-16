#include<iostream>
using namespace std;
class x{
    
    public:
        int bookno;
        int price,copies;
        char bookname[20],author[20];
        void initialize();
        void issue(int y);
        void return1(int y);
        void display();
};
void x::initialize()
{
    
        cout<<"enter bookno";
        cin>>bookno;
        cout<<"enter bookname";
        cin>>bookname;
        cout<<"enter author name";
        cin>>author;
        cout<<"enter price";
        cin>>price;
        cout<<"enter no of copies";
        cin>>copies;

}
void x::issue(int y)

{
    if(y==bookno)
    {
        if(copies>0)
        {
             cout<<"the book has been succesfully issued";
             copies--;
        }
        else
        {
             cout<<"not available -_-"<<"\n";
        }
    }
        
}
void x::return1(int y)
{
    if(y==bookno)
    {
        cout<<"the book has been returned";
        copies++;
    }
}
void x::display()
{
        cout<<"book no-"<<bookno<<"\n";
        cout<<"book name-"<<bookname<<"\n";
        cout<<"book author-"<<author<<"\n";
        cout<<"book price-"<<price<<"\n";
        cout<<"no of copies-"<<copies<<"\n";
}
int main()
{
    int y,i,ch,z;
    x a[10];
    while(true)
    {
    cout<<"enter 1 to initialize"<<"\n";
    cout<<"enter 2 to issue"<<"\n";
    cout<<"enter 3 to return"<<"\n";
    cout<<"enter 4 to display"<<"\n";
    cout<<"enter 5 to exit"<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"enter the no of books";
            cin>>y;
            for(i=0;i<y;i++)
            {
               a[i].initialize();
            }
            break;
        case 2:
            cout<<"enter the book no to be issued";
            cin>>z;
            for(i=0;i<y;i++)
            {
              a[i].issue(z);
            }
            break;
        case 3:
            cout<<"enter the book no to be returned";
            cin>>z;
            for(i=0;i<y;i++)
            {
                 a[i].return1(z);
            }
            break;
        case 4:
            for(i=0;i<y;i++)
            {
                 a[i].display();
            }
            break;
        case 5:
            exit(0);
    }
    }
    return 0;
   
}