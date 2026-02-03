#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};


Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* pre=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr){
        forward=curr->next;
        curr->next=pre;
        pre=curr;
        curr=forward;
    }
    return pre;
}

int main(){
    Node *head = new Node(4);
    Node *newNode1 = new Node(5);
    Node *newNode2 = new Node(6);
    Node *newNode3 = new Node(7);

    head->next = newNode1;
    newNode1->next = newNode2;
    newNode2->next = newNode3;

    Node* tmp = head;

    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }

    head = reverseLL(head);

    tmp = head;

    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }

    return 0;
}

// Output: 4 5 6 7

