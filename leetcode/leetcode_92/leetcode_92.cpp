#include <iostream>
#include <cstdio>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* reverseBetween(ListNode* head,int m,int n) {
       if(head->next == NULL || head == NULL || m == n)
            return head;
        ListNode* p = head->next;
        ListNode* ptr1 = head;
        ListNode* temp;
        int i;
        for(i = 2; i < m; i++) {
            temp = p->next;
            ptr1->next = p;
            p->next = NULL;
            ptr1 = p;
            p = temp;
        }
        ListNode* ptr2 = NULL;
        for(; i <= n; i++) {
            temp = p->next;
            p->next = ptr;
            ptr = p;
            p = temp;
        }
        //ptr1->next = ptr2;
        for(; p != NULL; p = p->next) {
            temp = p->next;
            ptr2->next = p;
            p->next = NULL;
            ptr2 = p;
            p = temp;
        }
        ptr1->next = ptr2;
        return ptr1;
    }
};
