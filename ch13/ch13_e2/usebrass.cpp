//
// Created by pxx on 3/14/19.
//
#include "brass.h"
#include <iostream>
#include <string>
const int CLIENTS=4;
int main(){
    using std::cin;
    using std::cout;
    using std::endl;

    Brass*p_clients[CLIENTS]; //使用了virtual，程序根据引用或指针指向的对象的类型来选择方法
    std::string temp;
    long tempnum;
    double tempbal;
    char kind; //选择基类、派生类对象

    for(int i=0;i<CLIENTS;i++)
    {
        cout<<"enter client's name:";
        getline(cin,temp);
        cout<<"enter clients's account number: ";
        cin>>tempnum;
        cout<<"enter opening balance:$";
        cin>>tempbal;
        cout<<"enter 1 for Brass Account or 2 for BrassPlus Account: ";
        while(cin>>kind&&(kind!='1'&&kind!='2'))
            cout<<"enter either 1 or 2:";
        if(kind=='1')
            p_clients[i]=new Brass(temp,tempnum,tempbal);
        else
        {
            double tmax,trate;
            cout<<"enter the overdraft limit:$";
            cin>>tmax;
            cout<<"enter the interest rate "<<"as a demical fraction:";
            cin>>trate;
            p_clients[i]=new BrassPlus(temp,tempnum,tempbal,tmax,trate);
        }
        while(cin.get()!='\n')
            continue;
    }
    cout<<endl;
    for(int i=0;i<CLIENTS;i++)
    {
        p_clients[i]->ViewAcct();
        cout<<endl;
    }
    for(int i=0;i<CLIENTS;i++)
    {
        delete p_clients[i];//free memory
    }
    cout<<"done.\n";
    return 0;
}
