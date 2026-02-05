// Input: LinkedList: 25->36->47->58->69->80, key: 19
// Output: 19->25->36->47->58->69->80

// Given a linked list sorted in ascending order and an integer called key, insert data in the linked list such that the list remains sorted.

#include <bits/stdc++.h>
using namespace std;

// structure of the node of the list is as
class Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* node = new Node(key);
        if(head->data>key){
            node->next=head;
            head=node;
            return head;
        }
        Node* tmp = head;
        while(tmp->next && key>tmp->next->data){
            tmp=tmp->next;
        }
        node->next=tmp->next;
        tmp->next=node;
        
        return head;
        
    }
};