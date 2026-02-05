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

Node* partition(Node* head, int x){
    if(head == NULL){
        return NULL;
    }

    Node* dummyNode = new Node(-1);
    Node* temp = head;

    // list for elements < x
    while(temp){
        if(temp->data < x){
            Node* newNode = new Node(temp->data);
            newNode->next = dummyNode->next;
            dummyNode->next = newNode;
        }
        temp = temp->next;
    }

    Node* dummyNode2 = new Node(-1);
    temp = head;

    // list for elements >= x
    while(temp){
        if(temp->data >= x){
            Node* newNode = new Node(temp->data);
            newNode->next = dummyNode2->next;
            dummyNode2->next = newNode;
        }
        temp = temp->next;
    }

    // join both lists
    Node* p = dummyNode;
    while(p->next){
        p = p->next;
    }
    p->next = dummyNode2->next;

    return dummyNode->next;
}

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
