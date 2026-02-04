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

bool search(Node* head,int target){
    if(head==NULL){
        return 0;
    }
    if(head->data==target){
        return 1;
    }
    return search(head->next,target);
}


int main(){
    Node* head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = NULL;
    int key = 3;
    if(search(head,key)){
        cout<<"Found"<<endl;
    }else{
         out<<"Not Found"<<endl;
    }

}