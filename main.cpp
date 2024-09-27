#include <iostream>
#include "deque.h"
using namespace std;

int main() {

    Deque myDeque;
    myDeque.push_back(5);
    myDeque.push_front(4);
    int test2 = myDeque.peek_back();
    int test = myDeque.peek_front();

    
    cout << "test: " << test << " test2: " << test2 << endl;



    return 0;
}