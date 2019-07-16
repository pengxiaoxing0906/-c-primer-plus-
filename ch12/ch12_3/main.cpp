#include <iostream>
#include "stock.h"
using namespace std;
const int STKS=4;

int main()
{
    stock stocks[STKS]={
            stock("huahua",12,20.2),
            stock("lala",10,10.2),
            stock("yaya",4,5.0),
            stock("xingxing",1,10.1)

    };
    cout<<"stock holdings:\n";
    int st;
    for(st=0;st<STKS;st++)
    {
       cout<<stocks[st]<<endl;
    }
    const stock*top=&stocks[0];
    for(st=1;st<STKS;st++)
    {
        top=&top->topval(stocks[st]);//now top points to the most valuable holding
    }
    cout<<"\n Most valuable holding:\n";
    cout<<*top;

    return 0;
}