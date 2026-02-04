#include<bits/stdc++.h>
using namespace std;


class Node*{
    int data;
    Node* next;
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
};


int countEvenNode(Node* head){
    if(head==NULL){
        return 0;
    }
    int count=0;
    Node* tmp=head;
    while(tmp){
        if(tmp->data%2==0){
            count++;
        }
    }
    return count;
}





int main(){

}