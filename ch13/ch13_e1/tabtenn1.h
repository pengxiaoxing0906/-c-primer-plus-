//
// Created by pxx on 3/12/19.
//

#ifndef CH13_E1_TABTENN1_H
#define CH13_E1_TABTENN1_H

#include <string>
using std::string;
//simple base class
class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn,const string &ln,bool ht);
    void Name()const;
    bool HasTable()const{ return  hasTable;}
    void ResetTable(bool v){hasTable=v;}
};
class RatedPlayer:public  TableTennisPlayer
{
private:
    unsigned  int rating;
public:
    RatedPlayer(unsigned int r,const string & fn,const string &ln,bool ht);
    RatedPlayer(unsigned int r,const TableTennisPlayer & tp);
    unsigned  int Rating()const{return rating;}
    void ResetRating(unsigned int r){rating=r;}
};


#endif //CH13_E1_TABTENN1_H
