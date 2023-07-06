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
    ListNode *reverseLL(ListNode *cur){
        ListNode *prev=NULL, *temp;
        while(cur){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode *slow=head, *fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseLL(slow->next);
        slow=slow->next;
        ListNode *first=head;
        while(slow){
            if(first->val!=slow->val) return false;
            first=first->next;
            slow=slow->next;
        }
        return true;
    }
};