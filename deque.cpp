#include "deque.h"


Deque::Deque() {
        tail = nullptr;
        head = nullptr;
}

void Deque::push_front(int z) {
        node* n = new node(z);
        if (head == nullptr)
                head = tail = n;
        else {
                n->rnode = head;
                head->lnode = n;
                head = n;
        }
}

void Deque::push_back(int a) {
         node* n = new node(a);
        if (tail == nullptr)
                head = tail = n;
        else {
                n->lnode = tail;
                tail->rnode = n;
                tail = n;
        }
}

void Deque::pop_front() {

}

void Deque::pop_back() {

}

int Deque::peek_front() {
        return Deque::head->data;
}

int Deque::peek_back() {
        return Deque::tail->data;
}

void Deque::remove_all() {
        //delete obj// will call deconstructor?
}

Deque::~Deque() {
        //delete[] pointersWeUsed?;
}