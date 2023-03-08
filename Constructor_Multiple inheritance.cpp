#include <iostream>
using namespace std;
class FOODCOURT
{
public:
    int id;
    int balance;
  FOODCOURT()
    {

    }
    FOODCOURT(int v_id,int v_balance)
    {
        id=v_id;
        balance=v_balance;
    }
};

class CUSTOMER
{
public:
    string cust_name;
    CUSTOMER()
    {

    }
    CUSTOMER(string name)
    {
        cust_name=name;
    }

};
class VOUCHER:public FOODCOURT,public CUSTOMER
{
public:
  VOUCHER()
    {

    }
    VOUCHER(int v_id,int v_balance,string name):FOODCOURT(v_id,v_balance),CUSTOMER(name)
    {

    }
    void voucher_balance(int cost)
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
    cout<<"Enter the number of customers";
    cin>>n;
   // VOUCHER* cust = new VOUCHER[n];
   VOUCHER cust[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the customer name\n";
        cin>>name;
        cout<<"Enter the voucher id\n";
        cin>>id;
        cout<<"Enter the voucher balance\n";
        cin>>balance;
        cust[i]=VOUCHER(id,balance,name);
    }
   cout<<"Purchase\n";
    do
    {

        cout<<"Enter voucher id:\n";
        cin>>id;
        cout<<"Enter product cost:\n";
        cin>>cost;
        for(int i=0;i<n;i++)
        {
            if(cust[i].find(id)==0)
            {
                cust[i].voucher_balance(cost);
                break;
            }
        }
        cout<<"Do you want to continue: Press 1.Yes else press any other key";
        cin>>ch;
        if(ch==1)
            continue;
        else
            break;
    }while(1);
    cout<<"Voucher Balance\n";
    for(int i=0;i<n;i++)
    {
        cust[i].print();
    }
}
