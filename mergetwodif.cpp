#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
void display(vector <int> x)
{
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<endl;
    }
}
void display1(list <int> x)
{
    list<int>::iterator p;
    for(p=x.begin();p!=x.end();p++)
    {
        cout<<*p<<endl;
    }
}
int main()
{
    vector <int>v,m(10);
    list <int> l(5);
    vector<int>::iterator x;
    list <int>::iterator y;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            v.insert(v.begin(),i);
        }
        else{
            l.push_front(i);
        }
    }
    sort(v.begin(),v.end());
     //sort(l.begin(),l.end());
     //l.sort();
    //display(v);
    merge(l.begin(),l.end(),v.begin(),v.end(),m.begin());
    sort(m.begin(),m.end());
    display(m);
    return 0;
}