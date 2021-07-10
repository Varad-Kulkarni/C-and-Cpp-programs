#include<iostream>
using namespace std;
class calculator{
int c,m,n;
public:
calculator(int m,int n){
c=m+n;
cout<<"\naddition is: "<<c;
}
void clculator(int m,int n){
c=m-n;
cout<<"\nsubstraction is: "<<c;
}
~calculator(){
cout<<"\nobject is destroyed";
}
};
int main()
{
int m,n;
cout<<"\nentre two numbers: ";
cin>>m>>n;
calculator c1(m,n);
c1.clculator(m,n);
return 0;
}
