#include<iostream>
using namespace std;
class values
{
public:
int a,b,sum,sub;
void discription();
void addition();
void substraction(int m,int n);
};
inline void values::discription()
{cout<<"we can add and substract numbers";
}
inline void values::addition()
{
cout<<"\n enter any two numbers to add: ";
cin>>a>>b;
sum=a+b;
cout<<"addition is: "<<sum;
}
inline void values::substraction(int m,int n)
{
cout<<"\n enter any two numbers to substract: ";
cin>>m>>n;
sub=m-n;
cout<<"\n substraction is: "<<sub;
}
int main()
{
values v;
int x=2,y=5;
v.discription();
v.addition();
v.substraction(x,y);
return 0;
}
