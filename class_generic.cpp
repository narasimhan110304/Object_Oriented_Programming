#include <iostream>
using namespace std;
template <class T, class S>
class FOODCOURT
{
    string cust_name;
    T id;
    S balance;
public:
    FOODCOURT()
    {
        id=0;
        balance=0;
    }
    void getdetail(string name,T id,S balance)
    {
        cust_name=name;
        this->id=id;
        this->balance=balance;
    }

    void voucher_balance(S cost)
    {
        balance-=cost;
    }
    int find(int num)
    {
        if(id==num)
            return 0;
    }
    void print()
    {
        cout<<cust_name<<"\t"<<id<<"\t"<<balance<<"\n";
    }
};

int main()
{
    string name;
    int n,id,balance,cost,ch;
    FOODCOURT<int,int> cust0;
    FOODCOURT<int,float> cust1;
    cust0.getdetail("qwe",11,100.5);
    cust1.getdetail("abc",12,100.5);
    cust0.print();
    cust1.print();
}
