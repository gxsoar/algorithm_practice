#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//迭代写法 
class Solution{
public:
    ListNode *reverseList(ListNode* head){
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* ptr = NULL;
        ListNode* temp = head;
        ListNode* p = head;
        while(p != NULL) {
            temp = p->next;
            p->next = ptr;
            ptr = p;
            p = temp;
        }
        return ptr;
    }
};

//递归写法
class Solution{
public:
    ListNode *reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        else {
            ListNode* ptr = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;
            return ptr;
        }
    }
};

int main() {

    return 0;
}