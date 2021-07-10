#include<iostream>
using namespace std;
class sum{
public:
int a,b,c;
void result();
sum(){
a=5;
b=7;
}};
void sum::result()
{c=a+b;
cout<<c;
}
int main()
{sum s;
s.result();
return 0;
}
