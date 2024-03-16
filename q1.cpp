#include<iostream>
using namespace std;
class play{
    public:
    int playcode,noofscene;
    float duration;
    char title[25];
    play()
    {
        duration=45.0;
        noofscene=5;
    }
    void new1();
    void moreinfo(int x,float y);
    void shoplay();
};
void play::new1()
{
    cout<<"enter the playcode";
    cin>>playcode;
    fflush(stdin);
    cout<<"enter the title";
    cin.getline(title,25);

}
void play::moreinfo(int x,float y)
{
    duration=y;
    noofscene=x;
}
void play::shoplay()
{   
    cout<<"playcode--"<<playcode<<"\n";
    
    cout<<"title--"<<title<<"\n";
    cout<<"duration--"<<duration<<"\n";
    cout<<"noofscenes--"<<noofscene<<"\n";
}
int main()
{
    int ch,z;
    float m;
    play a;
    while(1)
    {
        cout<<"enter 1 for a new play\n";
        cout<<"enter 2 for a editing duration and scene\n";
        cout<<"enter 3 for display \n";
        cout<<"enter 4 to exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            a.new1();
            break;
            case 2:
            cout<<"enter duration";
            cin>>m;
            cout<<"enter noofscenes";
            cin>>z;
            a.moreinfo(z,m);
            break;
            case 3:
            a.shoplay();
            break;
            case 4:
            exit(0);

        }
    }
}


