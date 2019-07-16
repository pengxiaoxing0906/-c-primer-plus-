//
// Created by pxx on 3/10/19.
//

#include "cow.h"
#include <iostream>
#include <cstring>
using namespace std;
Cow::Cow()
{
    name[0]='\0';
    hobby=NULL;
    weight=0.0;
}
Cow::Cow(const char *nm,const char *ho,double wt)
{
    strcpy(name,nm);
    int ho_length=strlen(ho);
    hobby=new char[ho_length+1];
    strcpy(hobby,ho);
    hobby[ho_length] = '\0';
    weight=wt;
}
Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    int hobby_length=strlen(c.hobby);
    hobby=new char[hobby_length+1];
    strcpy(hobby,c.hobby);
    hobby[hobby_length] = '\0';
    weight=c.weight;

}
Cow::~Cow()
{
    delete[] hobby;
    //hobby= nullptr;
}
Cow & Cow::operator=(const Cow &c)
{
    if(this==&c)
    {
        return *this;
    }
    strcpy(name,c.name);
    int hobby_length=strlen(c.hobby);
    hobby=new char[hobby_length+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    return *this;
}
void Cow::ShowCow() const
{
   cout<<"cow name is:" <<name<<endl;
   cout<<"cow hobby is:"<<hobby<<endl;
   cout<<"cow weight is:"<<weight<<endl;
}
