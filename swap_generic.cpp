#include<iostream>
using namespace std;
template<class T>
void swaper(T& p,T& q)
{
 T c=p;
 p=q;
 q=c;
}
int main()
{
    int a=5;
    int b=6;
    float x=4.5,y=6.5;

    swaper(a,b);
    swaper(x,y);

    cout<<"a="<<a<<"\tb="<<b<<"\n";
    cout<<"x="<<x<<"\ty="<<y<<"\n";

    return 0;
}
