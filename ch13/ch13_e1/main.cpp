#include <iostream>
#include "tabtenn1.h"
using namespace std;

int main() {
   TableTennisPlayer player1("tara","boomdea",false);
   RatedPlayer rplayer1(1140,"mallory","duck",true);
   rplayer1.Name();
   if(rplayer1.HasTable())
       cout<<": has a table.\n";
   else
       cout<<":hasn't a table.\n";
   cout<<"name:";
   player1.Name();
    if(player1.HasTable())
        cout<<": has a table.\n";
    else
        cout<<":hasn't a table.\n";
   rplayer1.Name();
   cout<<",rating: "<<rplayer1.Rating()<<endl;
   //initializa ratedplayer using tabletennisplayer object
   RatedPlayer rpalyer2(1212,player1);
   cout<<"name: ";
   rpalyer2.Name();
   cout<<",rating :"<<rpalyer2.Rating()<<endl;
    return 0;
}