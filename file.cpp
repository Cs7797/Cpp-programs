#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int o=1;
    char text[80];
    char ch;
    ofstream file("mytext.txt");
    while(o)
    {
        cout<<"enter line";
        cin.getline(text,80);
        file<<text<<"\n";
        fflush(stdin);
        cout<<"enter 1 to add more line or 0 to not";
        cin>>o;
    }
    file.close();
    ifstream file1("mytext.txt");
    ofstream file2("mytext1.txt");
    while(file1)
    {
        file1.get(ch);
        file2<<ch;
        if(ch==' ')
        {
            file1.get(ch);
            while(ch==' ')
            {
                file1.get(ch);
            }
            file2<<ch;
        }
    }  
    file1.close();
    file2.close();
    return 0;   
}