#include <iostream>
#include <vector>
using namespace std;


// Brute force approach 
class Node
{
	public:
	int data;
	Node* next= nullptr;
	Node(int data1, Node* next1)
	{
		data = data1;
		next = next1;
	}
	Node(int data1)
	{
		data =data1;
		next = nullptr;
	}
};

int sizeLL(Node* head)
{
    int cnt=0;
    while(head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
class Solution {
public:
    Node* middleNode(Node* head) {
        int len = sizeLL(head);
        int index = (len/2)+1;
        int cnt =0;
        Node* tmp = head;
        while(tmp)
        {
            cnt++;
            if (cnt == index)
            {
                head = tmp;
        
            }
            tmp=tmp->next;
        }
        return head;
    }
};