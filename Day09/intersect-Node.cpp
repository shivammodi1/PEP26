#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *intersect(Node *headA, Node *headB)
    {
        Node *a = headA;
        Node *b = headB;

        while (a != b)
        {
            if (a == NULL)
            {
                a = headB;
            }
            else
            {
                a = a->next;
            }

            if (b == NULL)
            {
                b = headA;
            }
            else
            {
                b = b->next;
            }
        }

        return a;
    }
};

int main()
{
    return 0;
}