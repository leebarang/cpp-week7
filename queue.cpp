#include "queue.h"

// 맨 뒤에 data 삽입
void Queue::push(int data) {
    LinkedList::insert(LinkedList::size_, data);
}

// 맨 앞 값을 반환하고 삭제
int Queue::pop() {
    int poped = LinkedList::get(0);
    LinkedList::remove(0);
    return poped;
}

// 맨 앞 값을 반환
int Queue::peek() {
    return LinkedList::get(0);
}

// 오퍼레이터 오버라이딩 (push와 동일한 역할을 하는 피연산자가 int인 += 연산자)
void Queue::operator+=(int i) {
    LinkedList::insert(LinkedList::size_, i);
}