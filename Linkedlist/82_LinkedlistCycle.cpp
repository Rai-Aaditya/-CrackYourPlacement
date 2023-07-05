// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode *fast=head, *slow=head;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
            if(fast->next) fast=fast->next;
            else return false;
            if(slow==fast) return true;
        }
        return false;
    }
};