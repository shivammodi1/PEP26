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

Node* removeNthFromEnd(Node* head, int n){
    if(head==NULL){
        return NULL;
    }

    int count=0;
    Node* tmp = head;
    while(tmp){
        count++;
        tmp=tmp->next;
    }
    count = count - n;
    if(count==0){
        return head->next;
    }
    tmp = head;
    Node* prev = NULL;
    while(count--){
        prev = tmp;
        tmp=tmp->next;
    }
    prev->next = tmp->next;
    delete tmp;
    return head;

}

int main(){
    return 0;
}