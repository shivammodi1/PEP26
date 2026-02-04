#include<bits/stdc++.h>
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

Node* deleteAtPosition(Node* head, int pos){
    if(head == NULL){
        cout << "List is empty" << endl;
        return head;
    }
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* curr = head;
    Node* prev = NULL;
    while(pos > 1 && curr != NULL){
        prev = curr;
        curr = curr->next;
        pos--;
    }
       
    if(curr == NULL){
        cout << "Position out of bounds" << endl;
        return head;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}


int main(){
    return 0;
}