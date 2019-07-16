#include <iostream>
using namespace std;
double add(double,double);
double mul(double,double);
double calculate(double,double,double(*pf)(double,double));

int main() {
    double x,y;
    cout<<"enter two numbers:"<<endl;
    while(cin>>x>>y)
    {
        cout<<"call add,the result of "<<x<<" and "<<y<<" is "<<calculate(x,y,add)<<endl;
        cout<<"call mul,the result of "<<x<<" and "<<y<<" is "<<calculate(x,y,mul)<<endl;

        cout<<"enter next two numbers:";
    }
    return 0;
}
double add(double x,double y)
{
    double c;
    c=x+y;
    return c;
}
double mul(double x,double y)
{
    double c;
    c=x*y;
    return c;
}
double calculate(double x,double y,double(*pf)(double,double))
{
    return pf(x,y);
}