#include<iostream>
using namespace std;
template<class T>
T add(T x,T y)
{
 T c=x+y;
 return c;
}
int main()
{
    int x;
    float b;

    x=add<int>(5,6);
    cout<<x<<"\n";
    b=add<float>(5.3,6.2);
    cout<<b;
    return 0;
}
