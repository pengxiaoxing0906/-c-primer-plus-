//
// Created by pxx on 3/11/19.
//

#ifndef CH12_4_STACK_H
#define CH12_4_STACK_H
typedef unsigned long Item;

class Stack {
private:
    enum{MAX=10};
    Item  *pitems;
    int size; //number of elements in stack
    int top; //index for top stack item
public:
    Stack(int n=MAX); //create stack with n elements
    Stack(const Stack &st);
    ~Stack();
    bool isempty()const;
    bool isfull()const;
    //push() returns false if stack already is full,true otherwise
    bool push(const Item&item); //add item to stack
    //pop() returns false if stack already is empty,true otherwise
    bool pop(Item&item);//pop top into item
    Stack&operator=(const Stack &st);

};


#endif //CH12_4_STACK_H
