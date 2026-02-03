#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// insert At end
Node* insertAtEnd(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        return newNode;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// insert At head
Node* insertAtStart(Node* head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        return newNode;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}
// insert at any position
Node* insertAtPostion(Node* head,int pos,int val){
    Node* newNode = new Node(val);

    if(pos == 1){
        if(head == NULL){
            return newNode;
        }
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }

    Node* temp = head;
    for(int i = 1; i < pos-1; i++){
        if(temp == NULL){
            cout << "Position out of bounds" << endl;
            return head;
        }
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Position out of bounds" << endl;
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL){  
        temp->next->prev = newNode;
    }

    temp->next = newNode;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtStart(head,5);
    head = insertAtPostion(head,2,15); // Insert 15 at position 2
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}
