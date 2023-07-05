// raiaditya's pc
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *slow=head, *fast = head;
        while(fast){
            fast=fast->next;
            while(fast && slow->val==fast->val){
                slow->next=fast->next;
                fast=fast->next;
            }
            slow=fast;
        }
        return head;
    }
};