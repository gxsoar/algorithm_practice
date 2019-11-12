#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution{
public:
    void deleteNode(ListNode *node){
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main() {

    return 0;
}