//
// Created by pxx on 3/10/19.
//

#ifndef CH12_3_STOCK_H
#define CH12_3_STOCK_H

#include <iostream>
using namespace std;


class stock {
private:
    char *company;
    int shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        total_val=shares*share_val;
    }
public:
    stock(); //default constructor
    stock(const char *name,long n=0,double pr=0.0);
    ~stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    const stock& topval(const stock&s)const;
    ostream& operator<<(ostream &os,const stock &s);



};


#endif //CH12_3_STOCK_H
