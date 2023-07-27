//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy;

    
    for (int i = 1; i < left; i++) {
        prev = prev->next;
    }

    ListNode *cur = prev->next;
    for (int i = 0; i < right - left; i++) {
        ListNode *temp = cur->next;
        cur->next = temp->next;
        temp->next = prev->next;
        prev->next = temp;
    }

    ListNode *newHead = dummy->next;
    delete dummy;
    return newHead;
}

};