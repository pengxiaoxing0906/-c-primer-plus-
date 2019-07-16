//
// Created by pxx on 3/10/19.
//

#ifndef CH12_1_COW_H
#define CH12_1_COW_H


class Cow {
    char name[20];
    char *hobby;
    double weight;
public:
    Cow();
    Cow(const char *nm,const char *ho,double wt);
    Cow(const Cow &);
    ~Cow();
    Cow &operator=(const Cow &c);
    void ShowCow() const; //display all cow data
};


#endif //CH12_1_COW_H
