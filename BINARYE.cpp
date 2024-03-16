#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class dat
{
    public:
    char no[10];
    char name[20];
    void getdata()
    {
        cout<<"enter name";
        cin.getline(name,20);
        cout<<"enter no";
        cin.getline(no,20);
    }
    void putdata()
    {
        cout<<setw(5)<<name<<setw(15)<<no<<endl;
    }
};
int main()
{
    fstream file;
    dat a;
    int o=1;
    file.open("binary.dat",ios::in|ios::binary|ios::out|ios::trunc);
    file.seekg(0,ios::beg);
    while(o)
    {
        a.getdata();
        file.write((char *)&a,sizeof(a));
        cout<<"do you wish to get more records";
        cin>>o;
        fflush(stdin);
    }
    file.seekg(0,ios::beg);
    while(file.read((char *)&a,sizeof(a)))
    {
        a.putdata();
    }
    file.close();
    return(0);
}