#include<iostream>
using namespace std;
template<class t>
class vector
{
    t *x;
    int size=5;
    public:
    vector(int *y)
    {
        for(int i=0;i<size;i++)
        {
            x[i]=y[i];
        }
    }
    void modify()
    {
        int index,new1;
        cout<<"enter the position of the element to be modified";
        cin>>index;
        cout<<"enter the new value";
        cin>>new1;
        x[index]=new1;
    }
    void mul()
    {
        int j;
        cout<<"enter the scalar to be multiplied";
        cin>>j;
        for(int i=0;i<size;i++)
        {
            x[i]=x[i]*j;
        }
    }
    void display()
    {
        cout<<"(";
        for(int i=0;i<size;i++)
        {
            cout<<x[i]<<",";
        }
        cout<<")";
    }

};
int main()
{
    int p[5]={1,2,3,4,5};
    vector <int> l(p);
    int ch;
    while(1)
    {
    cout<<"ENTER 2 TO MODIFY VECTOR"<<endl;
    cout<<"ENTER 3 TO MULTIPLY VECTOR"<<endl;
    cout<<"ENTER 4 TO DISPLAY VECTOR"<<endl;
    cout<<"ENTER 5 TO EXIT"<<endl;
    cin>>ch;
        switch(ch)
        {
            case 2:
            l.modify();
            break;
            case 3:
            l.mul();
            break;
            case 4:
            l.display();
            break;
            case 5:
            exit(0);
        }
    }
    return 0;
}