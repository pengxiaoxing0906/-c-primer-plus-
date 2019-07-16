#include <iostream>
using namespace std;
const int SLEN=30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student*ps);
void display3(const student pa[],int n);

int main() {
   cout<<"Enter class size: ";
   int class_size;
   cin>>class_size;
   while(cin.get()!='\n')
       continue;

   student *ptr_stu=new student[class_size];   //结构体数组，这个概念很模糊
   int entered=getinfo(ptr_stu,class_size);
   for(int i=0;i<entered;i++)
   {
       display1(ptr_stu[i]);
       display2(&ptr_stu[i]);
   }
   display3(ptr_stu,entered);
   delete[]ptr_stu;
   cout<<"Done\n";
    return 0;
}
int getinfo(student pa[],int n)  //输入结构体成员
{
    int enter=0;
cout<<"input the information of student(a blank line to quit):"<<endl;
for(int i=0;i<n;i++)
{
    cout<<"student"<<i+1<<endl;
    cout<<"please input the fullname:";
    cin.getline(pa[i].fullname,SLEN);
    cout<<"please input the hobby: ";
    cin.getline(pa[i].hobby,SLEN);
    cout<<"please input the ooplevel:";
    cin>>pa[i].ooplevel;
    while(cin.get()!='\n')
        continue;
    enter++;
}
    return enter;

}
void display1(student st)
{
    cout<<"student's fullname:"<<st.fullname<<endl;
    cout<<"student's hobby:"<<st.hobby<<endl;
    cout<<"student's ooplevel:"<<st.ooplevel<<endl;
}
void display2(const student *st) {
    cout << "Using display2(const student *st)" << endl;
    cout << "Full name: " << st->fullname << endl;
    cout << "Hobby: " << st->hobby << endl;
    cout << "Ooplevel: " << st->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    cout << "Using display3(const student pa[], int n)" << endl;;
    for (int i = 0; i < n; i++)
    {
        cout << "Infomation of student #" << i + 1 << ": " << endl;
        cout << "Full name: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Ooplevel: " << pa[i].ooplevel << endl;
    }
}