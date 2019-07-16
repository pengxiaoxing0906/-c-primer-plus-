//简单的调用函数的小例子，求调和平均数
#include <iostream>
float avg(int,int);

int main() {
    using namespace std;
    int a,b;
    float avg1;
    cout<<"please input a, b: ";
    cin>>a>>b;
    while(a!=0&&b!=0)
    {
       avg1=avg(a,b) ;
       cout<<"调和平均数avg1:"<<avg1<<endl;
        cout<<"please input a, b: ";
       cin>>a>>b;
    }
    return 0;
}
float avg(int x,int y)
{
    float avg2;
    avg2=2.0*x*y/(x+y);
    return avg2;
}
