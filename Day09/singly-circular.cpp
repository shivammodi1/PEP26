# include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

// insert At end
Node* insertAtEnd(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        newNode->next = newNode; // Point to itself
        return newNode;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}


int main(){
    Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    // Print the circular linked list
    if(head != NULL){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<endl;
            temp = temp->next;
            if(temp==head){
                return;
            }
        }
        cout << endl;
    }

    return 0;
}


