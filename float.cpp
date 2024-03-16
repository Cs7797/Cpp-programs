#include<iostream>
using namespace std;
class float1
{
    
    public:
    float a;
    float1(){
        a=0;
    }
    float1(float b){
        a=b;
    }
    float1 operator+(float1 b)
    {
        float1 temp;
        temp=a+b.a;
        return(temp);
    }
    float1 operator-(float1 b)
    {
        float1 temp;
        temp=a-b.a;
        return(temp);
    }
    float1 operator*(float1 b)
    {
        float1 temp;
        temp=(b.a)*10;
        return(temp);
    }
};
int main()
{
    float1 a(3.0);
    float1 b(2.0);
    float1 c;
    c=a*b;
    cout<<c.a;
    
}