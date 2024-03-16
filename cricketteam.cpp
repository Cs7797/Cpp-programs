#include<iostream>
using namespace std;
struct batting
{
    char name[20];
    int runs;
    float overs;
    char status[15];
};
batting batsmen[10];
struct bowling
{
    char name[20];
    int overs;
    int wickets;  
};
bowling bowlers[10];
void fn1();
//bowling fn2();
int main()
{
    int i,j;
    char z,n;
    cout<<"choose b for batmen and c for bowling";
    cin>>z;
    if (z=='b')
    {
        for(i=0;i<2;i++)
        {
            cout<<"enter name";
            fflush(stdin);
            cin.getline(batsmen[i].name,20);
            cout<<"enter runs";
            cin>>batsmen[i].runs;
            cout<<"enter overs";
            cin>>batsmen[i].overs;
            cout<<"enter status if out or not";
            cin>>batsmen[i].status;

        }
 
    }
    cout<<"enter b for batting,c for bowling";
    cin>>n;
    if(n=='b')
    {
        fn1();
    }
    
    return 0;
    
}
void fn1()
{
    int i;
    for(i=0;i<2;i++)
    {
         cout<<"name-"<<batsmen[i].name;
         cout<<"\nruns-"<<batsmen[i].runs;
         cout<<"\novers-"<<batsmen[i].overs;
         cout<<"\nstatus-"<<batsmen[i].status;
    }
   
}

