#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display(list <double> x)
{
    list<double>::iterator p;
    for(p=x.begin();p!=x.end();p++)
    {
        cout<<*p<<endl;
    }
}
int main()
{
    list <double> l(7);
    int z;
    list<double>::iterator p;
    l.insert(l.begin(),3,10.2);
    l.push_back(40.0);
    l.push_back(40.2);
    l.push_back(20.6);
    l.push_back(40.0);
    display(l);
    z=count(l.begin(),l.end(),40.0);
    cout<<z;
    return 0;

}