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
    ListNode *reverse(ListNode *head){
        ListNode *next=NULL, *prev=NULL, *cur=head;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        int carry=0;
        ListNode *dummy=new ListNode(0);
        ListNode *cur=dummy;
        while(l1 || l2 || carry){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *node = new ListNode(sum%10);
            cur->next=node;
            cur=cur->next;
        }
        if(carry){
            ListNode *node = new ListNode(carry);
            cur->next=node;
        }
        cur=dummy->next;
        cur=reverse(cur);
        return cur;
    }
};