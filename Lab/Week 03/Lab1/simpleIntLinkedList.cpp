#include <iostream>
#include "simpleIntLinkedList.h"
using namespace std;

ListNode::ListNode(int n)
{
	_item = n;
	_next = NULL;
}

void List::insertHead(int n)
{
	ListNode *aNewNode = new ListNode(n);
	aNewNode->_next = _head;
	_head = aNewNode;
	_size++;
};

void List::removeHead()
{
	if (_size > 0) {
		ListNode *temp = _head;
		_head = _head->_next;
		delete temp;
		_size--;
	}
}

void List::print() {
    ListNode*ptr = _head;
    while (ptr){
        cout << ptr->_item << " ";
        ptr = ptr->_next;
    }
    cout << endl;
}

bool List::exist(int n) {
    ListNode*ptr = _head;
    while(ptr){
        if (ptr->_item == n){
            return true;
        }
        ptr = ptr -> _next;
    }
	return false; // modify this
}

int List::headItem()
{
    ListNode*ptr = _head;
    if (ptr){
        return ptr->_item;
    }
	return 0; // modify this
}

int List::tailItem()
{
    ListNode*ptr = _head;
    while (ptr){
        ptr = ptr->_next;
        if (!ptr -> _next){
            return ptr->_item;
        }
    }
    return 0; // modify this
}

bool List::empty(){
    return headItem()? 0 : 1;
}

void List::removeTail(){
    ListNode*ptr = _head;
    //Run till second last node
    while (ptr->_next->_next){
        ptr = ptr->_next;
    }
    //Remove next node
    delete ptr->_next;
    //Point next to NULL
    ptr->_next = NULL;
    _size--;
}

List::~List()
{
	while (_size != 0)
		removeHead();
};

