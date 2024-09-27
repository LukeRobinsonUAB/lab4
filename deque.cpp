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
        std::cout << "debug: attempting to pop " << head->data << " from front/start/leftmostNode of deque." << std::endl; 
        node* t = head;
        head = head->rnode;
        head->lnode = nullptr;
        delete t;
}

void Deque::pop_back() {
        if (tail == nullptr) {
                std::cout << "cannot pop_back" << std::endl;
                return;
        }
        std::cout << "debug: attempting to pop " << tail->data << " from back/end/rightmostNode of deque." << std::endl; 
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
        while (tail != nullptr) {
                pop_back();
        }
}

Deque::~Deque() {
        remove_all();
}