// raiaditya's pc
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node *cur = head;
        while(cur && cur->next){
            if(cur->data<cur->next->data){
                cur->data=cur->next->data;
                Node *temp=cur->next;
                cur->next=cur->next->next;
                delete temp;
                cur=head;
            }
            else cur=cur->next;
        }
        return head;
    }
    
};