#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// use Merge Sort
// divide the nodes into two halves using the fast and slow pointer approach
// slow at your mid and fast at the end of the list
// recursively sort the sublists and then merge the sorted sublists
// time complexity: O(n log n) and space complexity: O(1)

Node* merge(Node* left,Node* right){
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    while(left && right){
        if(left->data < right->data){
            tail->next = left;
            left = left->next;
        }
        else{
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }
    if(left){
        tail->next = left;
    }
    else{
        tail->next = right;
    }
    return dummy->next;
}

Node* sortList(Node* head){
    if(!head || !head->next){
        return head;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast && fast->next){
        prev = slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    prev->next = NULL;


    Node* left = sortList(head);
    Node* right = sortList(slow);
    return merge(left, right);


}

int main(){
    return 0;
}