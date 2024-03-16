#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdlib.h>
using namespace std;
void display(vector<string> x)
{
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<endl;
    }
}
void del(vector <string>z)
{
    int x;
    vector<string>::iterator p;
    cout<<"enter elements position to be deleted";
    cin>>x;
    p=z.begin()+x;
    z.erase(p);
}
void add1(vector <string> n )
{
    int m;
            string z;
            cout<<"enter the position to insert an item";
            cin>>m;
            cout<<"enter item name";
            cin>>z;
            n.insert(n.begin()+m,z);
}
void add2(vector <string> b)
{
    string l;
            cout<<"enter item name";
            cin>>l;
            b.push_back(l);
}
int main()
{
    vector<string> shoppinglist;
    int i;
    string zs;
    for(i=0;i<5;i++)
    {
        cout<<"enter the item";
        cin>>zs;
        shoppinglist.push_back(zs);
    }
    while(1)
    {
        int ch;
        cout<<"ENTER 1 TO DELETE AN ELEMENT"<<endl;
        cout<<"ENTER 2 TO ADD AN ELEMENT"<<endl;
        cout<<"ENTER 3 TO ADD AN ELEMENT AT THE END OF VECTOR"<<endl;
        cout<<"ENTER 4 TO DISPLAY"<<endl;
        cout<<"ENTER 5 TO EXIT"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            del(shoppinglist);
            break;
            case 2:
            add1(shoppinglist);
            break;
            case 3:
            add2(shoppinglist);
            break;
            case 4:
            display(shoppinglist);
            break;
            case 5:
            exit(0);


        }

    }
    return 0;
}