#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// question link: https://leetcode.com/problems/odd-even-linked-list/description/

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
        {
            return nullptr;
        }
       
        ListNode *odd = head;
        ListNode *even1 = head->next;
        ListNode *even2 = head->next;

        while (even1 && even1->next)
        {
            odd->next = even1->next;
            odd = odd->next;

            even1->next = odd->next;
            even1 = even1->next;
        }
        odd->next = even2;
        return head;
    }
};