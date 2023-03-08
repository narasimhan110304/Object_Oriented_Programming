#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout << "Base";
    }
};
class Derived:public Base
{
    public:
    void show()
    {
        cout << "Derived";
    }
};
int main()
{
    Base* b; //Base class pointer
    Derived d; //Derived class object
    Base c;
   // b=&c;
   // b->show();
    b = &d;
    b->show();   //late Binding
}
