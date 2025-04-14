#include <iostream>
#include <vector>
using namespace std;
// Linked List Deletion at kth index
 
class Node{
	public:
	int data;
	Node* next = nullptr;
	Node(int data1, Node* next1)
	{
		data = data1;
		next = next1;
	}
	Node(int data1)
	{
		data = data1;
		next = nullptr;
	}
};
 
//convert array to linkedlist
Node* convert(vector<int> arr)
{
	Node * head = new Node (arr[0]);
	Node* mover = head;
	for (int i=1; i<arr.size(); i++)
	{
		Node* tmp = new Node(arr[i]); 
		mover->next = tmp;
		mover = tmp;
	}
	return head;
}
 
// delete from kth place
Node* deletekth(Node* head, int k)
{
	if (head == NULL) return NULL;
	if (k==1)
	{
		Node* tmp = head;
		head = head->next;
		delete tmp;
		return head;
	}
	int cnt=0;
	Node* temp = head;
	Node* prev = NULL;
	while(temp!=NULL)
	{
		cnt ++;
		if (cnt == k)
		{
			prev->next = prev->next->next;
			delete temp;
			break;
		}
		prev = temp;
		temp= temp->next;
	}
	return head;
}
void print(Node* head)
{
	while(head)
	{
		cout << head->data << " ";
		head = head->next;
	}
}
int main() {
	vector <int> arr = {1,2,3,4,5,6};
	Node* head = new Node(arr[0]);
	Node* reshead = convert(arr);
	reshead = deletekth(reshead, 1);
	print(reshead);
	return 0;
}