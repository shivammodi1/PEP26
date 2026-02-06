#include<bits/stdc++.h>
using namespace std;

Node* removeDuplicates(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr=head;
    unordered_map<int,int> mp;
    while(curr){
        mp[curr->data]++;
        curr=curr->next;
    }
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    curr=head;
    while(curr){
        if(mp[curr->data]==1){
            tail->next = curr;
            tail=tail->next;
        }
        curr=curr->next;
    }
    tail->next=NULL;
    return dummy->next;
}

// example of this problem is : https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-linked-list_799348?leftPanelTab=0
// here we have to delete the duplicates along with the original node
// for example : 1->2->3->3->4->4->5
// the output will be : 1->2->5

int main(){

}