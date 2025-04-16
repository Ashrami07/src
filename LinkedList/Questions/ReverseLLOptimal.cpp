#include <iostream>

using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;

    ListNode(int data1, ListNode* next1)
    {
        data = data1;
        next = next1;
    }

    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL)
        {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
        
    }
};