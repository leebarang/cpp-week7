#include "linked_list.h"
#include <iostream>

// 생성자 구현
LinkedList::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}

// 소멸자 구현
LinkedList::~LinkedList() {
    Node* current = head_;
    while (current != nullptr) {
        Node* target = current;
        current = current->next_;
        delete target; // 각 값을 삭제
    }
    head_ = nullptr;
    size_ = 0;
}

// 각 값을 출력
void LinkedList::print() {
    Node* current = head_;
    while (current != nullptr) {
        std::cout << current->value_ << " ";
        current = current->next_;
    }
    std::cout << std::endl;
}

// 값 삽입
void LinkedList::insert(int index, int value){
    size_++;
    Node* newNode = new Node(value); // 새로운 노드
    Node* previous = head_; // 이전 노드를 가리키는 포인터
    if (index == 0) {
        newNode->next_ = head_;
        head_ = newNode;
        return;
    }
    for (int i=0; i<index-1; i++) { //index - 1 번째 위치의 next에 삽입 (=index)
        previous = previous->next_;
    }
    newNode->next_ = previous->next_;
    previous->next_ = newNode;
}

// 값 반환
int LinkedList::get(int index) {
    Node* current = head_; // 현재 노드를 가리키는 포인터

    for (int i=0; i<index; i++) {
        current = current->next_;
    }

    return current->value_;
}

// 삭제
void LinkedList::remove(int index) {
    size_--;
    Node* target = head_; // 없애고자 하는 노드
    Node* next = head_; // 다음 노드를 가리키는 포인터
    Node* previous = head_; // 이전 노드를 가리키는 포인터

    if (index == 0) {
        next = head_->next_;
        delete target; // 대상 삭제
        head_ = next;
        return;
    }
    for (int i=0; i<index-1; i++) { //index - 1 번째 위치의 next를 삭제 (=index)
        previous = previous->next_;
    }
    target = previous->next_;
    next = target->next_;
    target->next_ = next;
    delete target; /// 대상 삭제
}