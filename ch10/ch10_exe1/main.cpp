#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
    using namespace std;
    stack st; //create an empty stack
    char ch;
    unsigned long po;
    cout<<"please enter A to add a purchase order.\n"
    <<"p to process a PO,or Q to quit.\n";
    while(cin>>ch&&toupper(ch)!='Q')
    {
        while(cin.get()!='\n')
            continue;
        if(!isalpha(ch))
        {
            cout<<'\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a': {
                cout << "enter a po number to add: ";
                cin >> po;
                if (st.isfull())
                    cout << "stack already full.\n";
                else
                    st.push(po);
                break;
            }
            case 'P': {
            }
            case 'p': {
                if (st.isempty())
                    cout << "stack is empty.\n";
                else {
                    st.pop(po);
                    cout << "po#" << po << " poped.\n";
                }
                break;
            }
        }
        cout<<"please enter A to add a purchase order,\n"
        <<"p to process a PO,or Q to quit.\n";

    }
    cout<<" Bye\n";
    return 0;
}