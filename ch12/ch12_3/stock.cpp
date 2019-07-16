//
// Created by pxx on 3/10/19.
//

#include "stock.h"
#include <cstring>
#include <iostream>
using namespace std;


stock::stock()
{
    company=NULL;
    //int len=strlen("no name");
   // company=new char[len+1];
   // strcpy(company,"no name");


    shares=0;
    share_val=0.0;
    total_val=0.0;
}
stock::stock(const char *name,long n,double pr)
{
    int name_length=strlen(name);
    company=new char[name_length+1];
    strcpy(company,name);
    if(n<0)
    {
        cout<<"numbers of shares can't be negative;"
        <<company<<" shares set to 0.\n";
        shares=0;
    }
    else
        shares=n;
    share_val=pr;
    set_tot();

}
stock::~stock()
{
    delete [] company;
    company= nullptr;
}
void stock::buy(long num,double price)
{
    if(num<0)
    {
        cout<<"numbers of shares purchased can't be negative."<<"transaction is aborted.\n";
    }
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void stock::sell(long num,double price)
{
    if(num<0)
    {
        cout<<"numbers of shares purchased can't be negative."<<"transaction is aborted.\n";
    }
    else if(num>shares)
    {
        cout<<"you can't sell more than you have!"<<"transaction is aborted.\n";
    }
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }

}
void stock::update(double price)
{
    share_val=price;
    set_tot();
}
const stock& stock::topval(const stock&s)const
{
    if(s.total_val>total_val)
        return s;
    else
        return *this;
}
ostream & stock::operator<<(ostream &os,const stock &s)
{
    ios_base::fmtflags orig=os.setf(ios_base::fixed,ios_base::floatfield);
    streamsize prec=os.precision(3);
    os<<"company:"<<s.company<<" shares:"<<s.shares<<'\n';
    os<<"share price:$"<<s.share_val;
    os.precision(2);
    os<<"total worth:$"<<s.total_val<<'\n';
    os.setf(orig,ios_base::floatfield);
    os.precision(prec);
    return os;
}