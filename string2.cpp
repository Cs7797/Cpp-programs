#include<iostream>
#include<string.h>
using namespace std;
class string1{
   
    public:
    char *p;
    int len;
    string1()
    {
        len=0;
        p= new char[len + 1];
    }
    string1(const char *x)
    {
        len=strlen(x);
        p=new char[len+1];
        strcpy(p,x);
    }
    friend void operator==(string1 a,string1 b)
    {
        if(a.len==b.len)
        {
            cout<<"equal";
        }
        else
        cout<<"not equal";
    }
};
int main()
{
    string1 a("dfdfdf");
    string1 b("asasa");
    a==b;

}
