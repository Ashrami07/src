#include <iostream>
#include <vector>
using namespace std;
// remove element from linkedlist

class Node
{
	public:
	int data;
	Node * next= nullptr;
	Node(int data1)
	{
		data = data1;
		next = nullptr;
	}
};

Node* convert (vector<int> arr)
{
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for (int i=1; i<arr.size();i++)
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
		head = head->next;
	}
}

// delete element
Node* removele(Node* head, int ele)
{
	if (head == NULL) return NULL;
	if (head->next->data == ele)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
		return head;
	}
	Node* tmp = head;
	Node* prev = NULL;
	while(tmp!= NULL)
	{
		if (tmp->data == ele)
		{
			prev->next = prev->next->next;
			delete tmp;
			break;
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return head;
}
int main() {
	vector<int>arr = {1,2,3,4,5,6,7};
	Node* head = convert(arr);
	print(head);
	head = removele(head, 4);
	cout<< endl<< "*** remove element ***" << endl;
	print(head);
	return 0;
}