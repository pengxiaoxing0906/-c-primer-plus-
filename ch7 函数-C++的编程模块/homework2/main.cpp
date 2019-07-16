
//输入数组元素 显示数组元素 反转数组元素再显示
#include <iostream>
const int size=10;
using namespace std;

int Fill_array(double name[],int n);
void Show_array(double name[],int n);
void Reverse_array(double name[],int n);

int main( )
{
    double a[size];
    int b;
    b=Fill_array(a,size);
    Show_array(a,b);
    Reverse_array(a,b);
    Show_array(a,b);
}
int Fill_array(double name[],int n)
{
    int x=0;
    cout<<"please input numbers: ";
    for(int i=0;i<n;i++)
    {
        if(cin>>name[i])
            x++;
        else
            break;
    }
    return x;
}
void Show_array(double name[],int n)
{
    for(int i=0;i<n;i++)
        cout<<name[i];
}
void Reverse_array(double name[],int n)
{
    double tmp;
    for(int i=0;i<n/2;i++)
    {tmp=name[i];
    name[i]=name[n-1-i];
    name[n-1-i]=tmp;
    }

}

