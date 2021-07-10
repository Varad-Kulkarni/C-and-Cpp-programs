#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int s;
    ofstream select;
    select.open("name.txt");
    select<<"\n select the roll numbers to get name: ";
    cin>>s;

    switch(s)
    {
    case 1:
        cout<<"john";
        break;
    case 2:
        cout<<"john12";
        break;
    case 3:
        cout<<"john1357";
        break;
    default:
        cout<<"you are not between 1-3";
        break;
    }
     ifstream sel;
    sel.open("name.txt");
    select<<"\n your name is: "<<s;
    select.close();
    return 0;
}
