#include "stack.h"

// 맨 위에 data 삽입
void Stack::push(int data) {
    LinkedList::insert(0, data);
}

// 맨 위 값을 반환하고 삭제
int Stack::pop() {
    int poped = LinkedList::get(0);
    LinkedList::remove(0);
    return poped;
}

// 맨 위 값을 반환
int Stack::peek() {
    return LinkedList::get(0);
}

// 오퍼레이터 오버라이딩 (push와 동일한 역할을 하는 피연산자가 int인 += 연산자)
void Stack::operator+=(int i) {
    LinkedList::insert(0, i);
}