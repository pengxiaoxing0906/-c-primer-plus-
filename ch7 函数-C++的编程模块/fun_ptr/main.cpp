//函数指针的实例
//获取函数地址 如果think（）是一个函数 则think就是该函数的地址
//声明函数指针声明指向函数的指针时 必须指定指针所指定的函数类型 即声明指定函数的返回类型以及函数的参数列表 如double(*pf)(int)
//使用指针来调用函数 （*pf)扮演角色与函数名相同，使用（*pf)时，把它看做函数名即可
#include <iostream>
using namespace std;


double betsy(int);
double  pam(int);  //函数声明
void estimate(int lines,double(*pf)(int));  //第二个参数解释为接收int类型的参数 返回double型指针


int main() {
   int code;
   cout<<"How many lines of code do you need?";
   cin>>code;
   cout<<"Here's betsy's estimate:\n";
   estimate(code,betsy);
    cout<<"Here's pam's estimate:\n";
    estimate(code,pam);
    return 0;
}
double betsy(int lns)
{
    return 0.05*lns;
}

double pam(int lns)
{
    return 0.03*lns+0.0004*lns*lns;
}

void estimate(int lines, double(*pf)(int))
{
    cout<<lines<<" lines will take"<<(*pf)(lines)<<" hours\n";   //（*pf)当做函数名使用 第一次调用指betsy 第二次调用指pam
}