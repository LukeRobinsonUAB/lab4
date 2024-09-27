#include <iostream>
#include "deque.h"
using namespace std;

int main() {

    Deque myDeque;
    myDeque.push_back(5);
    myDeque.push_front(4);
    myDeque.push_front(2);
    myDeque.push_front(99);

    int test2 = myDeque.peek_back();
    int test = myDeque.peek_front();
    cout << "test: " << test << " test2: " << test2 << endl;

    myDeque.pop_front();
    myDeque.pop_back();

    int back = myDeque.peek_back();
    int front = myDeque.peek_front();
    cout << "back: " << test << " front: " << test2 << endl;


    return 0;
}