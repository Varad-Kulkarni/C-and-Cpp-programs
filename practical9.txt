#include<iostream>
using namespace std;
class calculation
{
public:
int a,b,m,n,sum,sub;
void getvalues()
{
cout<<"\nenter two numbers to add: ";
cin>>a>>b;
cout<<"\nenter two numbers to substract: ";
cin>>m>>n;
}
friend void calculate(calculation &s);
};
void calculate(calculation &s)
{
s.sum=s.a+s.b;
cout<<"\naddition is: "<<s.sum;
s.sub=s.m-s.n;
cout<<"\nsubstraction is: "<<s.sub;
}
int main()
{calculation s;
s.getvalues();
calculate(s);
return 0;
}
