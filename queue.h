#ifndef QUEUE_H
#define QUEUE_H

#include "linked_list.h"

class Queue : public LinkedList {
    
public:
    void push(int data); // Queue의 정의에 맞게 데이터를 삽입한다.
    int pop(); // Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
    int peek(); // Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
    void operator+=(int i); // 오퍼레이터 오버라이딩 (push와 동일한 역할을 하는 피연산자가 int인 += 연산자)
};

#endif