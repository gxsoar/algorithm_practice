#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), Next(NULL) {}
};

class Solution{
public:
    int CountNode(ListNode *head) {
        int cnt = 0;
        ListNode *p;
        p = head;
        while(p != NULL) {
            p = p->next;
            cnt++;
        }
        return cnt;
    }
    //头节点已经包含数据了
    ListNode *removeNthFromEnd(ListNode *head,int n) {
        ListNode *p;
        p = head;
        int length = CountNode(head);
        if(length == 0 || (length == 1 && n ==1)) {
            head = NULL;
            return head;
        }
        else if(length == 1 && n == 0) return head;
        int m = length - n + 1;
        if(m == 1) {
            head = head->next;
            return head;
        }
        int cnt = 1;
        while(cnt < m - 1) {
            p = p->next;
            cnt++;
        }
        p->next = p->next->next;
        return head;
    }
};