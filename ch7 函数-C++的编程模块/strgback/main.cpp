//strgback.cpp--a function that returns a pointer to char
#include <iostream>
char *buildstr(char c,int n);
int main() {
    using namespace std;
    int times;
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Enter an interger: ";
    cin>>times;
    char*ps=buildstr(ch,times);  //返回一个指针ps
    cout<<ps<<endl;
    delete [] ps; //free memory
    return 0;
}

//buildstr()函数返回一个指针
char*buildstr(char c,int n)
{
    char *pstr=new char[n+1];  //n+1 是为了存储空值字符
    pstr[n]='\0';   //terminate string
    while(n-->0)
        pstr[n]=c;
    return pstr;
}