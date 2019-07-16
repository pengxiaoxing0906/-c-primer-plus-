//本程序采用结构里存储double数组 在main函数中把结构名赋给一个指针 函数参数传递指针 表示数组成员时，用间接运算符

#include <iostream>
const int seasons=4;
using namespace std;
struct cost{
    double expenses[seasons];
};
const char *snames[seasons]={"spring","summer","fall","winter"};

void fill( struct cost *pcost);
void show(struct cost *pcost);

int main() {

    struct cost *pCost = new struct cost;
    fill(pCost);
    show(pCost);
    delete pCost;
    return 0;
}
void fill( struct cost *pcost)
{
 for(int i=0;i<seasons;i++)
 {
     cout<<"enter "<<*(snames+i )<<" expenses: ";
     cin>>pcost->expenses[i];
 }
}
void show(struct cost *pcost)
{
    double total=0.0;
    cout<<" \nEXPENSES\n";
    for(int i=0;i<seasons;i++)
    {
        cout<<*(snames+i)<<":$"<<pcost->expenses[i]<<endl;
        total+=pcost->expenses[i];
    }
    cout<<"total expenses:$ "<<total<<endl;
}