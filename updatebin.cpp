#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<conio.h>
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
        cout<<setw(25)<<name<<setw(15)<<no<<endl;
    }
};
int main()
{
    fstream file,file1;
    dat a;
    int o=1,ch;
    char x[20];
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
    while(1)
    {
        cout<<"enter 1 for finding no\n";
        cout<<"enter 2 to find name\n";
        cout<<"enter 3 to update no\n";
        cout<<"enter 4 to exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            file.open("binary.dat",ios::in|ios::binary);
            file.seekg(0,ios::beg);
            fflush(stdin);
            cout<<"enter name";
            cin.getline(x,20); 
            while(file.read((char *)&a,sizeof(a)))
            {
                if(strcmp(x,a.name)==0)
                {
                    a.putdata();
                }
            }
            file.close();
            break;
            case 2:
            file.open("binary.dat",ios::in|ios::binary);
            file.seekg(0,ios::beg);
            fflush(stdin);
            cout<<"enter no";
            cin.getline(x,10);
            while(file.read((char *)&a,sizeof(a)))
            {
                if(strcmp(x,a.no)==0)
                {
                    a.putdata();
                }
            }
            file.close();
            break;
            case 3:
            file.open("binary.dat",ios::in|ios::binary|ios::app);
            file.seekg(0,ios::beg);
            file1.open("temp.dat",ios::in|ios::out|ios::binary|ios::trunc);
            file1.seekg(0,ios::beg);
            fflush(stdin);
            cout<<"enter name";
            cin.getline(x,20);
            while(file.read((char *)&a,sizeof(a)))
            {   
                if(strcmp(x,a.name)==0)
                {
                    cout<<"enter new no";
                    cin.getline(a.no,10);
                    file1.write((char *)&a,sizeof(a));
                }
                else
                {
                    file1.write((char *)&a,sizeof(a));
                }
            }
            file1.seekg(0,ios::beg);
            while(file1.read((char *)&a,sizeof(a)))
            {
                a.putdata();
            }
            file.close();
            file1.close();
            remove("binary.dat");
            rename("temp.dat","binary.dat");
            break;
            case 4:
            exit(0);

        }
    }
    file.close();
    return(0);
}