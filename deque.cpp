#include "deque.h"
#include <iostream>

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
        if (head == nullptr) {
                std::cout << "cannot pop_front" << std::endl;
                return;
        }
        std::cout << "debug: attempting to pop " << head->data << " from front/back/start/leftmostNode of deque." << std::endl; 
        node* newHead = head->rnode;
        delete head;
        head = newHead;
        head->lnode = nullptr;
}

void Deque::pop_back() {
        if (tail == nullptr) {
                std::cout << "cannot pop_back" << std::endl;
                return;
        }
        std::cout << "pop_back not yet functional" << std::endl;
        node* t = tail;
        tail = tail->lnode;
        tail->rnode = nullptr;
        delete t;

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