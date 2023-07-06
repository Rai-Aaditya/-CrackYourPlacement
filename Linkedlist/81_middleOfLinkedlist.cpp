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
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head,*q=head;
        while(p->next!=NULL){
            q=q->next;
            p=p->next;
            if(p->next) p=p->next;
            else break;
        }
        return q;
    }
};