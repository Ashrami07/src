#include <iostream>
#include <vector>
using namespace std;
// Insertion in linked list
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
Node* convert(vector<int> arr)
{
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for (int i=1; i<arr.size(); i++)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

void print(Node* head)
{
	while(head)
	{
		cout << head->data << " ";
		head =  head->next;
	}
}

Node* insertHeadLL (int val, Node* head)
{
	Node * temp = new Node(val);
	temp->next = head;
	return temp;
}
Node* inserttail (int val, Node* head)
{
	if (head == NULL)
	{
		return new Node(val,head);
	}
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	Node* newval = new Node(val);
	temp->next = newval;
	return head;
}
int main() {
	
	vector<int> arr = {1,2,3,4,5,6};
	Node* head = convert(arr);
	print(head);
	cout << endl << "** insert at head in list **" << endl;
	head = insertHeadLL(0, head);
	print(head);
	cout << endl << "** insert at tail in list **" << endl;
	head = inserttail(7, head);
	print(head);
	return 0;
 }