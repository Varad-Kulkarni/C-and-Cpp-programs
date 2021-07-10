#include<iostream>
using namespace std;
class animal
{
public:
void display()
{cout<<"\n Basic needs of any animal are food,water and shelter.";
}
};
class aquatic:public virtual animal
{
public:
void water()
{cout<<"\n We can live in water,we can breath in water.";
}
};
class land:public virtual animal
{
public:
void landed()
{cout<<"\n We can live on land,we can breath on land.";
}
};
class both:public aquatic, public land
{
    public:
void amphibian()
{cout<<"\n Thus,we called as amphibian.";
}
};
int main()
{
both b;
b.display();
b.water();
b.landed();
b.amphibian();
return 0;
}
