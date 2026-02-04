# include<bits/stdc++.h>
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

// insert At end
Node* insertAtEnd(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        newNode->next = newNode; // Point to itself
        return newNode;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

// delete node at end
Node* deleteAtEnd(Node* head){
    if(head==NULL){
        return head;
    }

    if(head->next == head){
        delete head;
        head = NULL;
        return head;
    }


    Node* tmp=head;
    // stop tmp before end node
    while(tmp->next->next != head){
        tmp=tmp->next;
    }

    // delete node from end
    Node* toDel = tmp->next;
    delete toDel;
    tmp->next = head;
    return head;
}

// delete at beginning
Node* deleteAtBeginning(Node* head){
    if(head==NULL){
        return head;
    }

    if(head->next == head){
        delete head;
        head = NULL;
        return head;
    }

    Node* temp = head;
    // move to last node
    while(temp->next != head){
        temp = temp->next;
    }

    Node* toDel = head;
    head = head->next;
    temp->next = head;
    delete toDel;
    return head;
}

int main(){
    Node* head = NULL;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    // Print the circular linked list
    if(head != NULL){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<endl;
            temp = temp->next;
            if(temp==head){
                return 0;
            }
        }
        cout << endl;
    }

    return 0;
}


