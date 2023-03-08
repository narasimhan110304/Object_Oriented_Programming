#include <iostream>
using namespace std;
class Base
{
   public:
   void show()
   {
      cout << "Base\n";
   }
};
class Derived:public Base
{
   public:
   void show()
   {
      cout << "Derived\n";
   }
};
int main()
{
   Base b;
   Derived d;
   b.show();
   d.show();
}
