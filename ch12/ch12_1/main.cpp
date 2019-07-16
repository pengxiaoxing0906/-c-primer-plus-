#include <iostream>
#include "cow.h"
using namespace std;

int main() {
    Cow cow1("hehehe", "eat", 123.4);
    Cow cow2("heihei", "drink", 321.2);
    Cow cow3(cow2);
    Cow cow4 = cow1;


    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    cow4.ShowCow();

    return 0;
}