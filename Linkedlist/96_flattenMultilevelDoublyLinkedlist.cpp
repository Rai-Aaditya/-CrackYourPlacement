//raiaditya's pc
#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    Node *dfs(Node *head, Node *next){
        head=flatten(head);
        Node *p=head;
        while(p && p->next){
            p=p->next;
        }
        p->next=next;
        if(next)
        next->prev=p;
        return head;
    }
    Node* flatten(Node* head) {
        Node *p=head;
        while(p){
            if(p->child!=NULL){
                Node *node=dfs(p->child,p->next);
                p->next=node;
                node->prev=p;
                p->child=NULL;
            }
            p=p->next;
        }
        return head;
    }
};