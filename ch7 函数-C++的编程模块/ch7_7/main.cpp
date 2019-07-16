//利用两个指针作为参数 第一个指针指向数组的第一个元素 最后一个指针指向数组结尾后的空位置
//代替利用一个指向数组第一个元素的指针和数组长度来传递参数的情况

#include <iostream>
using namespace std;


int fill_array(double*begin,double*end);
void show_array(double*begin,double*end);
void revalue(double r,double*begin,double*end);


int main()
{
   double properties[10];
   int size=fill_array(properties,properties+10);
   show_array(properties,properties+size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))   //错误检查
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }

        revalue(factor,properties, properties + size);
        show_array(properties, properties + size);
    }
    cout<<"Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double*begin,double*end)
{
    double *p;
    double temp;
    int i = 0;
    for (p = begin;p!= end; p++)
    {
        cout << "enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input preocess terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }

        *p = temp;
        i++;
    }

    return i;
}
void show_array(double*begin,double*end)
{
    double*p;
    int i=0;
    for(p=begin;p!=end;p++)
    {
        cout<<"property#"<<i+1<<":$";
        cout<<*p<<endl;
        i++;
    }
}
void revalue(double r,double*begin,double*end)
{
    double*p;
    for(p=begin;p!=end;p++)
        *p=*p*r;
}
