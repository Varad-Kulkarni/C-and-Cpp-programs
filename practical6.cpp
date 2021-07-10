#include<iostream>
using namespace std;

class First {
public:
   int a, b, c, d;

   void input() {
       cout << "Enter two numbers: ";
       cin >> a>>b;
   }
};

class Second : public First {
public:

   void add() {
       c = a + b;
   }
   void sub(){
   d=a-b;
   }
};
class Third : public Second {
public:

   void display() {
     cout << "\n Sum is: " << c;
     cout<<"\n substracton is: "<<d;
   }
};
int main() {

   Third th;
   th.input();
   th.add();
   th.sub();
   th.display();
   return 0;
}
