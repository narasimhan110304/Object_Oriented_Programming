#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a,float b);
    void putdata()
    {
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
    friend item operator+(item,item);

};


void item::getdata(int a,float b)
{
    this->number=a;
    this->cost=b;
}

item operator+(item t1,item t2)
{
    item t;
    t.number=t1.number+t2.number;
    t.cost=t1.cost+t2.cost;
    return(t);
}


int main() {
    item x,y,z;
    int a=5;
    cout << "Object x"<<"\n";
    x.getdata(5,6.6);
    x.putdata();


    cout << "Object y"<<"\n";
    y.getdata(10,9.6);
    y.putdata();

    z=x+y;
    z.putdata();

  return 0;
}
