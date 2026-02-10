#include<bits/stdc++.h>
using namespace std;

// create stack using array
class stack{
    int *arr;
    int top;
    int size;
    public:
    stack(int s){
        size = s;
        arr = ner int[size];
        top = -1;
    }
    // push operation
    void push(int x){
    if(top == size - 1){
        cout << "Stack Overflow" << endl;
        return;
    }
    top++;
    arr[top] = x;
    }

    // pop operation
    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    // top operation
    int peek(){
        if(top ==-1){
            cout<<"Stack is enmpty"<<endl;
            return -1;
        }
        return arr[top];
    }

    // size of stack
    int getSize(){
        return top + 1;
    }

    // check if stack is empty
    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

// using LL
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class StackLL{
    Node* top;
    int size;
    public:
    StackLL(){
        top = NULL;
        size = 0;
    }
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        size++;
    }
    void pop(){
        if(top == NULL){
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }
    int peek(){
        if(top == NULL){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
    int getSize(){
        return size;
    }
    bool empty(){
        return top == NULL;
    }
};

int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Top element: " << s.peek() << endl;
    cout << "Size of stack: " << s.getSize() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    cout << "Size of stack after pop: " << s.getSize() << endl;
    return 0;

}