#include <iostream>
#include <vector>
using namespace std;
// Doubly Linked List

class Node
{
	public:
	int data;
	Node* next;
	Node* back;
	
	Node(int data1, Node* next1, Node* back1)
	{
		data = data1;
		next = next1;
		back = back1;
	}
	Node(int data1)
	{
		data = data1;
		next = nullptr;
		back = nullptr;
	}
};

Node* convert(vector<int> arr)
{
	Node* head = new Node(arr[0]);
	Node* prev = head;
	for (int i=1; i<arr.size();i++)
	{
		Node* temp = new Node(arr[i],nullptr,prev);
		prev->next = temp;
		prev = temp;
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

//Delete head 
Node* deletehead (Node* head)
{
	if (head == NULL) return NULL;
	if (head->next == NULL)
	{
		return NULL;
	}
	Node* prev = head;
	head = head->next;
	head->back = nullptr;
	prev->next = nullptr;
	delete prev;
	return head;
}

// Delete tail in DLL
Node* deletetail (Node* head)
{
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	Node* prev = temp->back;
	temp->back =nullptr;
	prev->next = nullptr;
	delete temp;
	
	return head;
}

int main() {
	vector <int> arr = {1,2,3,4,5,6};
	Node* head = convert(arr);
	print(head);
	
	cout<< endl << "*** delete head of DLL ***" << endl; 
	head= deletehead(head);
	print(head);
	
	cout<< endl << "*** delete tail of DLL ***" << endl; 
	head= deletetail(head);
	print(head);
	return 0;
}