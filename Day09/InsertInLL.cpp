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

// Insert At the Start of Linked List
Node* insertAtStart(Node* head, int x){
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

// insert at any position function
Node* insertAtPosition(Node* head,int pos,int val){
    if(pos==1){
        Node *newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    // reach till (pos-1)th node
    for(int i=1;i<pos-1;i++){
        if(temp==NULL){
            return head; // position is greater than length of linked list
        }
        temp = temp->next;
    }

    if(temp==NULL){
        return head; // position is greater than length of linked list
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}



void printList(Node* head){
    Node* tmp = head;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main(){
    Node *head = new Node(4);
    Node *newNode1 = new Node(5);
    Node *newNode2 = new Node(6);
    Node *newNode3 = new Node(7);

    head->next = newNode1;
    newNode1->next = newNode2;
    newNode2->next = newNode3;

    cout<<"Original Linked List: ";
    Node* tmp = head;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

    head = insertAtStart(head, 10);
    cout<<"After Inserting 10 at Start: ";
    printList(head);
    head = insertAtStart(head, 20);
    cout<<"After Inserting 20 at Start: ";
    printList(head);



    return 0;
}