//
// Created by eugen on 24.04.2017.
//

#include "Stack.h"

Stack::Stack() {
    size = 0;
    top = nullptr;
}

void Stack::push(int value) {
    element * t = new element;
    t->value = value;
    t->next = top;
    top = t;
    size++;
}

int Stack::pop() {
    int v = top -> value;
    element * t = top;
    top = top -> next;
    delete t;
    size--;
    return v;
}
