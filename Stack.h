//
// Created by eugen on 24.04.2017.
//

#ifndef LAB10_STACK_H
#define LAB10_STACK_H

struct element {
    int value;
    element * next;
};

class Stack {
    int size;
    element * top;
public:
    Stack();
    void push(int value);
    int pop();
    int peek() { return top->value; }
    bool isEmpty() { return size == 0; }
    int get_size() { return size; }
};


#endif //LAB10_STACK_H
