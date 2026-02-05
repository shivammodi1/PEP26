#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

// method1 -> Floyd Loop detection Algo
bool detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast) return true;
    }
    
    return false;
}

// method2 using hash map
bool detectCircle(Node* head){
    unordered_map<Node*,bool> visit;
    Node* tmp = head;
    while(tmp){
        // loop detected here
        if(visit[tmp]==1){ 
            return true;
        }
        visit[tmp]=1; // mark as seen
        tmp=tmp->next;
    }
    return false;
}


int main(){
    return 0;
}