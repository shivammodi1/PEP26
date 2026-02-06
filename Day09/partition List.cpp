#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Solution {
public:
    Node* partition(Node* head, int x) {
        if(head == NULL) return NULL;

        Node* smallDummy = new Node(-1);
        Node* largeDummy = new Node(-1);

        Node* smallTail = smallDummy;
        Node* largeTail = largeDummy;

        Node* temp = head;

        while(temp){
            if(temp->data < x){
                smallTail->next = new Node(temp->data);
                smallTail = smallTail->next;
            }
            else{
                largeTail->next = new Node(temp->data);
                largeTail = largeTail->next;
            }
            temp = temp->next;
        }

        // join both lists
        smallTail->next = largeDummy->next;

        return smallDummy->next;
    }
};

// helper function to insert at end
Node* insert(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL) return newNode;

    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// print list
void printList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 5);
    head = insert(head, 2);

    int x = 3;

    head = partition(head, x);
    printList(head);

    return 0;
}
