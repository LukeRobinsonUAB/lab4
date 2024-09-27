#include <iostream>
#include "deque.h"
#include "user.h"
using namespace std;

int main() {

    Deque* myDeque = new Deque();
    myDeque->push_back(5);
    myDeque->push_front(4);
    myDeque->push_front(2);
    myDeque->push_front(99);

    int test2 = myDeque->peek_back();
    int test = myDeque->peek_front();
    cout << "test: " << test << " test2: " << test2 << endl;

    myDeque->pop_front();
    myDeque->pop_back();

    int back = myDeque->peek_back();
    int front = myDeque->peek_front();
    cout << "back: " << back << " front: " << front << endl;

    delete myDeque; // calls destructor -> calls remove_all()

    //////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////

    User* myUser = new User();

    return 0;
}