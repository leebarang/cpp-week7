#include "list.h"

// index에 노드를 삽입한다
void List::insert(int index, int value) {
    LinkedList::insert(index, value);
}

// index의 노드의 값을 반환한다
int List::get(int index) {
    return LinkedList::get(index);
}

// index의 노드를 삭제한다.
void List::remove(int index) {
    LinkedList::remove(index);
}