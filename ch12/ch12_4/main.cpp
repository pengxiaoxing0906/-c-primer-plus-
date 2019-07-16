#include <iostream>
#include "stack.h"
using namespace std;
int main() {
   Stack s1(10);
   Stack s2(s1);
   Stack s3=s1;
    for (size_t i = 0; i < 11; i++)
    {
        Item item;
        cout << "#" << i+1 << ": " << endl;
        if (!s1.pop(item))
        {
            cout << "st1 pop error!" << endl;
        }
        else
            cout << "st1: " << item << endl;

        if (!s2.pop(item))
        {
            cout << "st2 pop error!" << endl;
        }
        else
            cout << "st2: " << item << endl;

        if (!s3.pop(item))
        {
            cout << "st3 pop error!" << endl;
        }
        else
            cout << "st3: " << item << endl;

        cout << endl;
    }
    return 0;
}