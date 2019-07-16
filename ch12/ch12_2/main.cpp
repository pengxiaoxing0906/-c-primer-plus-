#include <iostream>
#include "String2.h"
using namespace std;

int main() {
   String2 s1(" and i am a C++ student.");
   String2 s2="please enter your name: \n";

//   cout << s2 << endl;
   String2 s3;
   cout<<s2; //overloaded <<operator

   string tmp;
   cin >> tmp;
   cin.get();
   s3 = String2(tmp.c_str());
//   cin>>s3; //overloaded >> operator
//   cin.get();
   s2="my name is "+s3;
   cout<<s2<<".\n";
   s2=s2+s1;
   s2.stringup(); //coverts string to uppercase
   cout<<"the string\n"<<s2<<"\ncontains"<<s2.has('A')<<" 'A' characters in it.\n";
   s1="red";//String(const char*),then String2 &operator=(const String&)
   String2 rgb[3]={String2(s1),String2("green"),String2("blue")};
   cout<<"enter the name of a primary color for mixing light:";
   String2 ans;
   bool success=false;
   while (cin>>ans)
   {
       ans.stringlow();
       for(int i=0;i<3;i++)
       {
           if(ans==rgb[i])
           {
               cout<<"that's right!\n";
               success=true;
               break;
           }
       }
       if(success)
           break;
       else
           cout<<"try again!\n";
   }
   cout<<"bye\n";
    return 0;
}