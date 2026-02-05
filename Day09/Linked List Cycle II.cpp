// So in this question we have to find the starting point of the cycle in the LL.
// If cycle is there than return the starting point of the cycle otherwise return NULL.


#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int x){
        data=x;
        next=NULL;
    }
};


bool detectLoop2(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow && fast && fast->next){
        slow = slow->next; // 1x speed
        fast = fast->next->next; //2x speed

        // Loop detected 
        // Now find the starting node of that Loop
        if(slow==fast){
            slow = head;
            // move both at 1x speed
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow; // finally we reach starting point of Loop
        }
    }

    return NULL;
}

int main(){
    return 0;
}