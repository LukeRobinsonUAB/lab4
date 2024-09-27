#ifndef _DEQUEH_
#define _DEQUEH_

struct node {
        int data;
        node *lnode;
        node *rnode;

 node(int cdata) {
        data = cdata;
        lnode = nullptr;
        rnode = nullptr;
    }
};

class Deque {
    public:

        Deque();

        void push_front(int z);

        void push_back(int a);

        void pop_front();

        void pop_back();

        int peek_front();

        int peek_back();

        void remove_all();

        ~Deque();


    private:
        node* tail;
        node* head;

};













#endif