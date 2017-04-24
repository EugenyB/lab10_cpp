#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    Stack stack;
    for (int i = 0; i < 10; ++i) {
        stack.push(i+1);
    }

    cout << stack.get_size() << endl;

    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;
    return 0;
}