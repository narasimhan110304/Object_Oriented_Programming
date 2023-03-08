#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    int number1;
    void getdata(int a,float b);
   void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
};

void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}

int main() {
  item x;
   x.number1=10;
   cout<<x.number1;
   cout << "Object x"<<"\n";
  x.getdata(5,6.6);
 x.putdata();

  item y;
  cout << "Object y"<<"\n";
  y.getdata(10,9.6);
 y.putdata();
  x.putdata();

  return 0;
}
