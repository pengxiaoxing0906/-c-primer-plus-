#include <iostream>
unsigned int c_in_str(const char *str,char ch);  //prototype

int main() {
    using namespace std;
    char mmm[15]="minimum";  //string in an array
    char *wail="ululate"; //wail points to string

    unsigned int ms=c_in_str(mmm,'m');
    unsigned int us=c_in_str(wail,'u');
    cout<<ms<<" m characters in "<<mmm<<endl; //mmm指地址，但是以字符串显示
    cout<<us<<" u characters in "<<wail<<endl;
    return 0;
}

unsigned int c_in_str(const char *str,char ch)
{
    unsigned int count=0;
    while(*str) //当*str是‘\0'时停止循环
    {
        if(*str==ch)
            count++;
        str++; //指针移动到下一位
    }
    return count;

}