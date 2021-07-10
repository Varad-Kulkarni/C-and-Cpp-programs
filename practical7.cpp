#include<iostream>
using namespace std;
class areafinder
{
public:
    int a,b,c;
    float area(int r)
    {
    cout<<"\n enter radius of circle to find area of circle: ";
    cin>>r;
    cout<<"\narea of circle is: "<<3.14*r*r;
    return 3.14*r*r;
    }
    void area()
    {
        cout<<"\nenter breadht and height of rectangle to find area: ";
        cin>>a>>b;
        c=a*b;
        cout<<"\narea of rectangle is: "<<c;
    }
    void area(int x,int y)
    {
        float ar;
        cout<<"\n enter the lenght of base and height for trianglr to find area: ";
        cin>>x>>y;
        ar=0.5*x*y;
        cout<<"\narea of triangle is: "<<ar;
    }
};
int main()
{
    areafinder a1;
    int r,m,n;
    a1.area(r);
    a1.area();
    a1.area(m,n);
    return 0;
}


