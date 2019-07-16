//
// Created by pxx on 3/10/19.
//

#ifndef CH12_2_STRING2_H
#define CH12_2_STRING2_H


#include <regex>
#include <iostream>
using namespace std;

class String2 {
public:
    char*str;
    int len;
    static int num_strings; //number of objects
    static const int CINLIM=80; //cin input limit
public:
    //constructors and other methods
    String2(const char*s);
    String2();
    String2(const String2 &); //copy constructor
    ~String2();
    //int length () const{return len;}

    //overloaded operator methods
    String2 &operator=(const String2 &);
    String2 &operator=(const char *);
    char &operator[](int i);
    const char &operator[](int i)const;

    //overloaded operator friends
    friend bool operator<(const String2 &st1, const String2 &st2);
    friend bool operator>(const String2 &st1, const String2 &st2);
    friend bool operator==(const String2 &st1, const String2 &st2);
    friend ostream& operator<<( ostream & os, const String2 &st);
    friend istream& operator>>( istream &is,  String2 &st);

    //new methods
    //String2 operator+(const String2 & st) const;
    //String2 operator+(const char * s) const;
   friend String2 operator+(const String2 &st1,const String2& st2);
    void stringlow();
    void stringup();
    int has(char a);

    //static function
    //static int HowMany();
};


#endif //CH12_2_STRING2_H
