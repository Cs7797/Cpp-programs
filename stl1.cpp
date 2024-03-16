#include<iostream>
#include<vector>
using namespace std;
    void display(vector <int> &x)
    {
        for(int i=0;i<9;i++)

        {
            cout<<x[i]<<endl;
        }    
    }
int main()
{
    vector <int> x;
    x.insert(x.begin(),0);
    x.insert(x.begin()+1,7,1);
    x.push_back(9);
    display(x);
    return 0;
}