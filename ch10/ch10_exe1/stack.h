//
// Created by pxx on 2/20/19.
//

#ifndef CH10_EXE1_STACK_H
#define CH10_EXE1_STACK_H

typedef unsigned  long Item;
class stack {
private:
    enum{MAX=10};
    Item  items[MAX];  //holds stack items
    int top; //index for top stack item(顶部堆栈项的索引）
public:
    stack();
    bool isempty() const; //类方法不修改调用对象，应将其申明为const
    bool isfull() const;
    //push() returns false if stack already full,true otherwise
    bool push(const Item &item);
    //pop() returns false if stack is empty,true otherwise
    bool pop(Item &item);


};


#endif //CH10_EXE1_STACK_H
