#include <iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout << "Base";
    }
};
class Derived:public Base
{
    public:
    void show()     //overridden function
    {
        cout << "Derived";
    }
};
int main()
{
    Base* b; //Base class pointer
    Derived d; //Derived class object
    b = &d;
    b->show();   //Early Binding
}
