//
// Created by pxx on 3/10/19.
//

#include "String2.h"
#include <cstring>
#include <cctype>
#include <iostream>
int String2::num_strings=0;
String2::String2(const char*s)
{
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    num_strings++;
}
String2::String2()
{
    len=4;
    str=new char[1];
    str[0]='\0';  //default string
    num_strings++;
}
String2::String2(const String2 &st) //copy constructor
{
    num_strings++;
    len=st.len;
    str=new char [len+1]; //allot space
    strcpy(str,st.str);
}
String2::~String2()
{
    --num_strings;
    delete [] str;
}

String2 & String2::operator=(const String2 &st)
{
    if(this==&st)
        return *this;
    delete[]str;

    len=st.len;
    str=new char[len+1];
    strcpy(str,st.str);
    return *this;
}
String2 & String2::operator=(const char *s)
{

    delete[]str;
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    cout << str << endl;
    return *this;
}
char & String2::operator[](int i)
{
    return str[i];
}
const char & String2::operator[](int i)const
{
    return str[i];
}

 bool operator<(const String2 &st1, const String2 &st2)
 {
    return(strcmp(st1.str,st2.str)<0);
 }
 bool operator>(const String2 &st1, const String2 &st2)
 {
    return st2<st1;
 }
 bool operator==(const String2 &st1, const String2 &st2)
 {
    return (strcmp(st1.str,st2.str)==0);
 }
 ostream& operator<<( ostream & os, const String2 &st)
 {
    os<<st.str;
    return os;
 }
 istream& operator>>( istream &is,  String2 &st)
 {
    char temp[String2::CINLIM];
    is.get(temp,String2::CINLIM);
    if(is)
    {
        st=temp;
        while(is&&is.get()!='\n')
            continue;
        return is;
    }

 }
//String2 String2::operator+(const String2 & st) const
//{
   // int total_len = len + st.len;
   // char *temp = new char[total_len + 1];
   // strcpy(temp, str);
   // strcpy(temp + len, st.str);
  //  temp[total_len] = '\0';
  //  return String2(temp);
//}

 String2  operator+(const String2 &st1,const String2 &st2)
 {
    int total_len=st1.len+st2.len;
     char *temp = new char[total_len + 1];
    strcpy(temp, st1.str);
     strcpy(temp + st1.len, st2.str);
     return String2(temp);
 }
void String2::stringlow()
{
for(int i=0;i<len+1;i++)
{
    str[i]=tolower(str[i]);
}
}
void String2::stringup()
{
    for(int i=0;i<len+1;i++)
    {
        str[i]=toupper(str[i]);
    }
}
int String2::has(char a)
{
    int same=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==a)
        {
            same++;
        }
    }
    return same;
}

 //int String2::HowMany()
//{
  //  return num_strings;
//}