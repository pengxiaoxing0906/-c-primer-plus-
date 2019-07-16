#include <iostream>
template<typename T>
void Swap(T &a,T &b);

struct job{
    char name[40];
    double salary;
    int floor;
};


//explicit specialization
template<>void Swap<job>(job &j1,job &j2);
void show(job &j);


int main() {
   using namespace std;
   cout.precision(2);
   cout.setf(ios::fixed,ios::floatfield);
   int i=10,j=20;
   cout<<"i,j ="<<i<<" , "<<j<<endl;
   cout<<"using compiler-gengrated int swapper:\n";
   Swap(i,j);  //gengrates void Swap(int &,int &)
   cout<<"now i,j= "<<i<<" , "<<j<<endl;


   job sue={"susan yaffe",73000.60,7};
   job sidney={"sidney taffee",78060.72,9};
   cout<<"before job swapping:\n";
   show(sue);
   show(sidney);
   Swap(sue,sidney);  //uses void Swap(job& ,job&)
   cout<<"after job swapping:\n";
   show(sue);
   show(sidney);
    return 0;
}
template <typename T>
void Swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

//Swap just the salary and floor fields of a job structure
template<>void Swap<job>(job &j1,job &j2) //specialiazation
{
    double t1;
    int t2;
    t1=j1.salary;
    j1.salary=j2.salary;
    j2.salary=t1;
    t2=j1.floor;
    j1.floor=j2.floor;
    j2.floor=t2;
}
void show(job &j)
{
    using namespace std;
    cout<<j.name<<" :$"<<j.salary<<" on floor "<<j.floor<<endl;
}