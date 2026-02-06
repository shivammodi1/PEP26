#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c=0;
        ListNode* tmp=head;
        // Check if there are at least k nodes to reverse
        while(c<k && tmp){
            c++;
            tmp=tmp->next;
        }

        // if no. of nodes are less than k 
        if(c<k){
            return head;
        }

        // reverse 
        ListNode* curr=head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        c=0;
        while(c<k){
            Next = curr->next;
            curr->next =  prev;
            prev=curr;
            curr=Next;
            c++;
        }

        // recursive call for the next part
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};