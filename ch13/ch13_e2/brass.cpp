//
// Created by pxx on 3/14/19.
//

#include "brass.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

//formating stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

Brass::Brass(const std::string&s,long an,double bal)
{
    fullName=s;
    acctNum=an;
    balance=bal;
}
void Brass::Deposit(double amt)
{
    if(amt<0)
    {
        cout<<"Negative deposit not allowed; "<<"deposit is cancelled.\n";
    }
    else
        balance+=amt;
}
double Brass::Balance() const
{
    return balance;
}
 void Brass::Withdraw(double amt)
 {
     //set up ###.## format
     format initialState=setFormat();
     precis  prec=cout.precision(2);

     if(amt<0)
     {
         cout<<"withdrawal amount must be positive; "<<"withdrawl canceled.\n";
     }
     else if(amt<=balance)
         balance-=amt;
     else
         cout<<"withdrawl amount of $"<<amt<<" exceeds your balance.\n"<<"withdrawl canceled.\n";
     restore(initialState,prec);

 }
 void Brass::ViewAcct()const
 {
     //set up ###.## format
    format initialState=setFormat();
     precis  prec=cout.precision(2);
     cout<<"Client: "<<fullName<<endl;
     cout<<"Account Number: "<<acctNum<<endl;
     cout<<"Balance:$"<<balance<<endl;
    restore(initialState,prec);//restore original format
 }

 //BrassPlus Methods
 BrassPlus::BrassPlus(const std::string&s,long an,double bal,double ml,double r):Brass(s,an,bal)  //非构造函数不能使用成员初始化列表
 {
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
 }
BrassPlus::BrassPlus(const Brass&ba,double ml,double r):Brass(ba)
{
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

//redefine how ViewAcct() works
 void BrassPlus::ViewAcct()const
{
    //set up ###.## format
    format initialState=setFormat();
    precis  prec=cout.precision(2);
    Brass::ViewAcct();
    cout<<"Maximum loan:$ "<<maxLoan<<endl;
    cout<<"owed to bank:$"<<owesBank<<endl;
    cout.precision(3); //###.### format
    cout<<"loan rate: "<<100*rate<<"%\n";
    restore(initialState,prec);
}
 void BrassPlus::Withdraw(double amt)
 {
     //set up ###.## format
     format initialState=setFormat();
     precis  prec=cout.precision(2);

     double bal=Balance();
     if(amt<=bal)
         Brass::Withdraw(amt);
     else if(amt<=bal+maxLoan-owesBank)
     {
         double advance=amt-bal;
         owesBank+=advance*(1.0+rate);
         cout<<"bank advance:$ "<<advance<<endl;
         cout<<"finance charge:$"<<advance*rate<<endl;
         Deposit(advance);
         Brass::Withdraw(amt);
     }
     else
         cout<<"Credit limit exceeded.Transaction cancelled.\n";
     restore(initialState,prec);
 }

 format setFormat()
 {
     //set up ###.## format
     return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
 }
 void restore(format f,precis p)
 {
    cout.setf(f,std::ios_base::floatfield);
    cout.precision(p);
 }

Brass::~Brass() {}