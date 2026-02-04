#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data = val;
        next=NULL;
    }
};

Node* middleNode(ListNode* head){
    if(head==NULL){
        return head;
    }

    if(head->next == NULL){
        return head;
    }

    // using sow fast pointer
    // slow will move 1x speed
    // fast will move 2x speed
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}

int main(){
    return 0;
}    