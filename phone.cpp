#include<iostream>
#include<string>
using namespace std;
class phone{
int pname;
int psize;
public:
void phon(int size)
{cout<<"nokia";
psize=size;
}
void phonecall(){
cout<<"phonecall usig name: "<<pname;
}
};
int main()
{
phone phone1;
phone1.phon(100*200);
phone1.phonecall();
return 0;
}
