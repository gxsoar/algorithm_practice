#include <iostream>

using namespace std;

class MyLinkedList {
   public:
    struct MyListNode {
        int val;
        MyListNode* next;
        MyListNode(int x) : val(x), next(NULL){};
    };
    int len;
    MyListNode* head;  //头节点
    MyListNode* rear;  //尾节点
    /** Initialize your data structure here. */
    MyLinkedList() {
        len = 0;
        MyListNode* p = new MyListNode(0);
        head = p;
        rear = p;
    }
    /** Get the value of the index-th node in the linked list. If the index is
     * invalid, return -1. */
    int get(int index) {
        if (index < 0 || index > len) return -1;
        MyListNode* p = head;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        if (p)
            return p->val;
        else
            return -1;
    }

    /** Add a node of value val before the first element of the linked list.
     * After the insertion, the new node will be the first node of the linked
     * list. */
    void addAtHead(int val) {
        if (len == 0) {
            head->val = val;
            rear = head;
        } else {
            MyListNode* p = new MyListNode(val);
            // head->next = rear;
            p->next = head;
            head = p;
        }
        ++len;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if (len == 0) {
            rear->val = val;
        } else {
            MyListNode* p = new MyListNode(val);
            rear->next = p;
            rear = p;
        }
        ++len;
    }

    /** Add a node of value val before the index-th node in the linked list. If
     * index equals to the length of linked list, the node will be appended to
     * the end of linked list. If index is greater than the length, the node
     * will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index > len) return;
        if (index <= 0) {
            addAtHead(val);
            return;
        }
        if (index == len) {
            addAtTail(val);
            return;
        }
        MyListNode* p = head;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        MyListNode* q = new MyListNode(val);
        q->next = p->next;
        p->next = q;
        len++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index < 0) return;
        if (index == 0) {
            MyListNode* q = head;
            head = head->next;
            --len;
            delete q;
            return;
        }
        MyListNode* p = head;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        if (!p->next) return;
        MyListNode* q = p->next;
        p->next = q->next;
        --len;
        if (index == len) rear = p;
        delete q;
    }
};
int main(int argc, char const *argv[])
{
    
    return 0;
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */