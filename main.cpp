/*
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

    User* myUser = new User(); //myUser is now a pointer to a User obj
    myUser->setEmail("user@host.domain");
    myUser->setuserName("myUser1");
    string t = myUser->getuserName();
    cout << t << endl;
    int nf = myUser->numFriends();
    cout << "numfriends: " << nf << endl;

    User* testUser = new User();
    testUser->setuserName("test");
    testUser->setEmail("test@host.domain");

    myUser->addFriend(testUser);
    nf = myUser->numFriends();
    cout << "numfriends: " << nf << endl;
    myUser->removeFriend("test");
    nf = myUser->numFriends();
    cout << "numfriends: " << nf << endl;

    delete myUser;
    delete testUser;

    return 0;
}
*/