#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
    ListNode *removeNthFromEnd(ListNode* head, int n){
        vector<ListNode*> v;
        ListNode* p = head;
        while(p != NULL) {
            v.push_back(p);
            p = p->next;
        }
        int length = v.size();
        if(length == 0) return NULL;
        if(length == n) {
            head = head->next;
            return head;
        }
        ListNode* q1 = v[length - n - 1];
        ListNode* q2 = v[length - n + 1];
        if(n == 1) {
            q1->next = NULL;
            return head;
        }
        q1->next = q2;
        return head;
    }
};