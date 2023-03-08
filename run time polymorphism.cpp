#include <iostream>
using namespace std;
class person
{
protected:
    string name;
public:
    person(string x)
    {
        name=x;
    }
    virtual void feature()
    {

    }
};
class parent:public person
{
    int children;
public:
    parent(string x,int c):person(x)
    {
        children=c;
    }
    void feature()
    {
        cout<<"I am a parent\n";
        cout<<"My name:"<<name<<"\n";
        cout<<"No. of children:"<<children<<"\n";
    }
};
class employee:public person
{
    string designation;
    public:
    employee(string x,string d):person(x)
    {
        designation=d;
    }
    void feature()
    {
        cout<<"I am an employee\n";
        cout<<"My name:"<<name<<"\n";
        cout<<"My designation:"<<designation<<"\n";
    }
};
int main()
{
    person *p;
    string n,desig;
    char role;
    int c;
    cout<<"Enter name:";
    cin>>n;
    cout<<"\nEnter designation:";
    cin>>desig;
    cout<<"\nEnter number of children:";
    cin>>c;

    parent abc(n,c);
    employee emp(n,desig);
    cout<<"Enter the person role:parent-p/employee-e";
    cin>>role;
    switch(role)
    {
    case 'p':
        p=&abc;
        p->feature();
        break;
    case 'e':
        p=&emp;
        p->feature();
        break;
    }


    return 0;

}
