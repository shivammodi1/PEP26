#includE < bits / stdc++.h>
using namespace std;

// Interleave the First Half of the Queue with Second Half
// example: q = {1,2,3,4,5,6}
// output: {1,4,2,5,3,6} 

void rearrangeQueue(queue<int> &q)
{
    queue<int> firstHalf;
    int n = q.size();
    // push first half of the queue into another queue
    for (int i = 0; i < n / 2; i++)
    {
        firstHalf.push(q.front());
        q.pop();
    }
   // second que
   queue<int> secondHalf;
   for(int i=0;i<n/2;i++){
    secondHalf.push(q.front());
    q.pop();
   }
    // interleave the two halves
    while(!firstHalf.empty() && !secondHalf.empty()){
        q.push(firstHalf.front());
        firstHalf.pop();
        q.push(secondHalf.front());
        secondHalf.pop();
    }
}


// using 2 stack
void rearrangeQueue(queue<int> &q)
{
    stack<int> s1, s2;
    int n = q.size();
    // push first half of the queue into stack s1
    for (int i = 0; i < n / 2; i++)
    {
        s1.push(q.front());
        q.pop();
    }
    // reverse the back half of the queue and push into stack s2
    for (int i = n / 2; i < n; i++)
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    
    while(!s2.empty() && !q.empty()){
        q.push(s2.top());
        s2.pop();
        q.push(q.front());
        q.pop();
    }
    
}

// using 1 stack
void rearrangeQueue(queue<int> &q)
{
    
}

int main()
{
    return 0;
}