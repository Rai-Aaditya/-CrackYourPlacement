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


long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long modu=1000000007;
    long long num1=0, num2=0;
    while(l1){
        num1 = (num1*10+l1->data)%modu;
        l1=l1->next;
    }
    while(l2){
        num2 = (num2*10+l2->data)%modu;
        l2=l2->next;
    }
    return (num1*num2)%modu;
    
}