#include<bits/stdc++.h>
using namespace std;


// create queue using array (CIRCULAR QUEUE)
class MyQueue{
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyQueue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // push operation
    void push(int x){
        // overflow condition for circular queue
        if((rear + 1) % size == front){
            cout << "Queue Overflow" << endl;
            return;
        }

        if(front == -1){
            front = rear = 0;
        }else{
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    // pop operation
    void pop(){
        if(front == -1){
            cout << "Queue Underflow" << endl;
            return;
        }

        if(front == rear){
            front = rear = -1;
        }else{
            front = (front + 1) % size;
        }
    }

    // front operation
    int peek(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    // size of queue
    int getSize(){
        if(front == -1) return 0;
        if(rear >= front)
            return rear - front + 1;
        else
            return size - front + rear + 1;
    }

    // check if queue is empty
    bool empty(){
        return front == -1;
    }
};


// using Linked List
class Node{ 
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};      

class QueueLL{
    Node* front;
    Node* rear;
    int size;

public:
    QueueLL(){
        front = NULL;
        rear = NULL;
        size = 0;
    }

    // push operation
    void push(int x){
        Node* newNode = new Node(x);

        if(rear == NULL){
            front = rear = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    // pop operation
    void pop(){
        if(front == NULL){
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

        delete temp;
        size--;
    }

    // front operation
    int peek(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    // size of queue
    int getSize(){
        return size;
    }

    // check if queue is empty
    bool empty(){
        return front == NULL;
    }
};


int main(){

    cout << "---- Linked List Queue ----" << endl;

    QueueLL q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front element: " << q.peek() << endl;
    cout << "Size of queue: " << q.getSize() << endl;

    q.pop();
    cout << "Front element after pop: " << q.peek() << endl;
    cout << "Size of queue after pop: " << q.getSize() << endl;


    cout << "\n---- Circular Array Queue ----" << endl;

    MyQueue cq(5);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);

    cout << "Front element: " << cq.peek() << endl;
    cout << "Size of queue: " << cq.getSize() << endl;

    cq.pop();
    cout << "Front after pop: " << cq.peek() << endl;
    cout << "Size after pop: " << cq.getSize() << endl;

    return 0;
}
