#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    int roll;
    int i;

    ofstream ofle("student");
    for(i=0;i<2;i++)
    {
        cout<<"Enter name and roll number:";
        cin>>name>>roll;
        ofle<<"\n"<<roll<<"\t"<<name;
    }
    ofle.close();
    ifstream afle("student");
    for(i=0;i<2;i++)
    {
        afle>>roll;
        afle>>name;
        cout<<"\n"<<roll<<"\t"<<name;
    }
    afle.close();
    return 0;
}
