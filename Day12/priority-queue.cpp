/*
priority queue is a special type of queue where elements are accessed on basis of priorty, not
the insertion order.
-- by default it has highest priority for the largest element, but we can change it to smallest element by using greater<int>
-- it is implemented using heap data structure, so the time complexity of insertion and deletion is O
 */

#include<iostream> 
using namespace std;
#include<queue>
int main(){
    // max heap
    priority_queue<int> pq_max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(20);

    cout<<pq_max.size()<<endl; 

    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }
}