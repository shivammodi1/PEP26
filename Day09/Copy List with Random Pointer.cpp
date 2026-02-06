#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(int x){
        data = x;
        next = NULL;
        random = NULL;
    }
};

Node* CopyRandomList(Node* head){
    // check head exist or not
    if(!head){
        return NULL;
    }

    // step1: create a copy node and insert next to the original node
    Node* temp=head;
    while(temp){
        Node* copy = new Node(temp->data);
        copy->next = temp->next;
        temp->next = copy;
        temp=temp->next->next; // move to the next original node
    }

    // step2: copy the random pointer
    temp = head;
    while(temp){
        Node* copy = temp->next;
        if(temp->random){
            copy->random = temp->random->next; // point to the copy of the random node
        }else{
            copy->random = NULL;
        }
        temp=temp->next->next; // move to the next original node
    }

    // step3: separate the original and copy list
    Node* copy = head->next; // head of the copy list
    Node* ans = copy; // to return the head of the copy list
    temp = head;

    while(temp && copy){
        if(temp->next){
            temp->next = temp->next->next; // restore the original list
        }
        if(copy->next){
            copy->next = copy->next->next; // restore the copy list
        }
        temp=temp->next; // move to the next original node
        copy=copy->next; // move to the next copy node
    }
    return ans;

}

int main(){
    return 0;
}