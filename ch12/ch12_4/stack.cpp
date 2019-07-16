//
// Created by pxx on 3/11/19.
//

#include "stack.h"

Stack::Stack(int n)//create stack with n elements
{
    pitems=new Item[n];
    size=n;
    top=0;
}
Stack::Stack(const Stack &st)
{
    size=st.size;
    pitems=new Item[size];
    top=st.top;
    for(int i=0;i<top;i++)
    {
        pitems[i]=st.pitems[i];
    }

}
Stack::~Stack()
{
    delete [] pitems;
    pitems= nullptr;
}
bool Stack::isempty()const
{
    return  top==0;
}
bool Stack::isfull()const
{
    return top==size;
}
//push() returns false if stack already is full,true otherwise
bool Stack::push(const Item&item)//add item to stack
{
    if(top<size)
    {
        pitems[top++]=item;
        return true;
    }
    else
        return false;
}
//pop() returns false if stack already is empty,true otherwise
bool Stack::pop(Item&item)//pop top into item
{
    if(top>0)
    {
        item=pitems[--top];
        return true;
    }
    else
        return false;
}
Stack & Stack::operator=(const Stack &st)
{
    size=st.size;
    pitems=new Item[size];
    top=st.top;
    for(int i=0;i<top;i++)
    {
        pitems[i]=st.pitems[i];
    }
}