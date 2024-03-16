#include<iostream>
using namespace std;
struct date{
    int day,month,year;
};
void addate(date x);
int main()
{
    date date1;
    cout<<"enter the day,month,year in dd mm yyyy format";
    cin>>date1.day>>date1.month>>date1.year;
    if(date1.day>31 || date1.day<0)
    {
        cout<<"not valid";
        exit(0);
    }
    else if(date1.month>12 || date1.month<=0)
    {
        cout<<"not valid";
        exit(0);
    }
    else if(date1.year<0001 || date1.year>2023)
    {
        cout<<"not valid";
        exit(0);
    }
    addate(date1);
    return 0;
}
void addate(date x)
{
    int y;
    int mm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"enter the no of days to be added";
    cin>>y;
    x.day+=y;
    while(x.day>mm[x.month])
    {
        x.day-=mm[x.month];
        x.month++;
        if(x.month>12)
        {
            x.month=1;
            x.year++;
        }

    }
    cout<<"date is"<<x.day<<x.month<<x.year;

}
