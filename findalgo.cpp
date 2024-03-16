#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int> x)
{
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<endl;
    }
}
int main()
{
    vector <int> y;
    vector <int>::iterator it;
    y.push_back(10);
    y.push_back(30);
    y.push_back(20);
    y.push_back(20);
    y.push_back(40);
    display(y);
    it=find(y.begin(),y.end(),20);
    if(it!=y.end())
    {
        cout<<"found element at position"<<it-y.begin()<<endl;
    }
    else
    {
        cout<<"element not found";
    }
    return 0;
    
}