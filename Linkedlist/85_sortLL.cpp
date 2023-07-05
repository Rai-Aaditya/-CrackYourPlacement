#include <bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;



class Solution
{
    public:
    Node* segregate(Node *head) {
        if(!head || !head->next) return head; 
        Node *zeroHead=NULL, *zeroTail=NULL;
        Node *oneHead=NULL, *oneTail=NULL;
        Node *twoHead=NULL, *twoTail=NULL;
        Node *p=head;
        while(p){
            if(p->data==0){
                if(!zeroHead){
                    zeroHead=p;
                    zeroTail=p;
                }
                else{
                    zeroTail->next=p;
                    zeroTail=p;
                }
            }
            else if(p->data==1){
                if(!oneHead){
                    oneHead=p;
                    oneTail=p;
                }
                else{
                    oneTail->next=p;
                    oneTail=p;
                }
            }
            else{
                if(!twoHead){
                    twoHead=p;
                    twoTail=p;
                }
                else{
                    twoTail->next=p;
                    twoTail=p;
                }
            }
            p=p->next;
        }
        if(twoTail) twoTail->next=NULL;
        else if(oneTail) oneTail->next=NULL;
        else zeroTail->next=NULL;
        if(zeroHead){
            if(oneHead){
                zeroTail->next=oneHead;
            }
            else{
                zeroTail->next=twoHead;
            }
            return zeroHead;
        }
        if(oneHead) oneTail->next=twoHead;
        if(oneHead) return oneHead;
        else return twoHead;
    }
};


void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void insert(int n1) {
    int n, value, i;
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}