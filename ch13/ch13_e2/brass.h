//
// Created by pxx on 3/14/19.
//

#ifndef CH13_E2_BRASS_H
#define CH13_E2_BRASS_H

#include <string>


//Brass Account class
class Brass {
private:
    std::string fullName; //客户姓名
    long acctNum;  //客户账号
    double balance;  //当前结余
public:
    Brass(const std::string&s="nullbody",long an=-1,double bal=0.0);
    void Deposit(double amt); //存款
    double Balance() const; //返回当前结余
    virtual void Withdraw(double amt); //取钱，虚函数使得基类对象和派生类对象可以使用同名但不同功能的成员函数
    virtual void ViewAcct()const;
    virtual ~Brass();
};


//Brass Plus Account Class
class BrassPlus:public Brass
{
private:
    double maxLoan; //透支上限
    double rate; //贷款利率
    double owesBank; //当前透支总额
public:
    BrassPlus(const std::string&s="nullbody",long an=-1,double bal=0.0,double ml=500,double r=0.11125);
    BrassPlus(const Brass&ba,double ml=500,double r=0.11125);
    virtual void ViewAcct()const;
    virtual  void Withdraw(double amt);
    void ResetMax(double m){maxLoan=m;}
    void ResetRate(double r){rate=r;}
    void ResetOwes(){owesBank=0;}
};

#endif //CH13_E2_BRASS_H
