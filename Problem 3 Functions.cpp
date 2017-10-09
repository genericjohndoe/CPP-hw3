//
//  Problem 3 Functions.cpp
//  hw3
//
//  Created by Joel Johnson on 5/8/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//
#include <iostream>
#include "Problem 3 Functions.h"
using namespace std;

Hw3Stack::Hw3Stack() {
    int Capacity;
    cout << "Please enter the capacity of the stack: ";
    cin >> Capacity;
    capacity = Capacity;
    size = 0;
    stack = new stackItem[capacity];
}

Hw3Stack::Hw3Stack(Hw3Stack& stacks) {
    capacity = stacks.getCapacity();
    size = stacks.getSize();
    stack = stacks.getPointer();
}
Hw3Stack::~Hw3Stack() {
    delete [] stack;
}

bool Hw3Stack::isEmpty() {
    if (size == 0)
        return true;
    return false;
}

int Hw3Stack::getSize() {
    return size;
}

int Hw3Stack::getCapacity() {
    return capacity;
}

stackItem* Hw3Stack::getPointer() {
    return stack;
}

void Hw3Stack::push(stackItem item) {
    stack[size] = item;
    size += 1;
    if (size == capacity){
        capacity *= 2;
        stackItem* a = new stackItem[capacity];
        a = this->getPointer();
        stack = a;
        }
}
bool Hw3Stack::pop() {
    if (size > 0){
        stackItem* p = this->top();
        p = NULL;
        size -= 1;
        return true;
    }
    return false;
}

stackItem* Hw3Stack::top() {
    if (size > 0){
        return (stack + sizeof(stackItem)*(size-1));
    }
    return nullptr;
}

void Hw3Stack::printStack() {
    for (int i = size-1; i >=0 ; i--){
        cout << (*(stack+i)).name << endl;
        this->pop();
    }
}

