#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
};

// Palindrome Linked List
bool isPalindrome(Node *head)
{
    if(head==NULL){
        return true;
    }
    if(head->next == NULL){
        return true;
    }
    int c=0;
    Node* curr = head;
    while(curr){
        c++;
        curr=curr->next;
    }

    c/=2;

    Node* prev = NULL;
    curr=head;
    while(c--){
        prev = curr;
        curr = curr->next;
    }
    pre->next = NULL;// this for seprating the LL into two parts 

    // from here reversing second part 
    prev = NULL;
    Node* fur=NULL;
    while(curr){
        fur = curr->next;
        curr->next = prev;
        prev=curr;
        curr=fur;
    }
    
    Node* head1 = head;
    Node* head2 = prev;

    while(head1 && head2){
        if(head1->data != head2->data){
            return false;
        }else{
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
}




int main()
{

    return 0;
}