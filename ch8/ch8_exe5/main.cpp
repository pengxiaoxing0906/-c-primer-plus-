#include <iostream>
template <typename T>  //original template
void swap(T &a,T &b);

template<typename T>
void swap(T *a,T *b,int n);  //new template

void show(int a[]);
const int Lim=8;

int main() {
   using namespace std;
   int i=10,j=20;
   cout<<"i,j= "<<i<<" , "<<j<<endl;
   cout<<"using compiler-generated int swapper:\n";
   std::swap(i,j);  //matches original template
   cout<<"now i,j = "<<i<<" , "<<j<<endl;

   int d1[Lim]={0,8,0,4,2,2,7,0};
   int d2[Lim]={0,7,2,0,1,9,6,9};
   cout<<"original arrays:\n";
   show(d1);
   show(d2);
   swap(d1,d2,Lim);  //matches new template
   cout<<"swapped arrays:\n";
   show(d1);
   show(d2);
    return 0;
}
template<typename T>
void swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
template<typename T>
void swap(T *a,T *b,int n)
{
    T temp;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
void show(int a[])
{
    using namespace std;
    cout<<a[0]<<a[1]<<"/";
    cout<<a[2]<<a[3]<<"/";
    for(int i=4;i<Lim;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}