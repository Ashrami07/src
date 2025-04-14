#include <iostream>
#include <vector>
using namespace std;
//Insertion in LL at kth place
class Node
{
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
Node* convert(vector<int> arr)
{
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i =1; i<arr.size(); i++)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

void print(Node * head)
{
	while(head)
	{
		cout << head->data << " ";
		head = head->next;
	}
}

// insert at kth place
Node* insertatKth(int val, int k, Node* head)
{
	if(head == NULL)
	{
		if (k==1)
		{
			return new Node(val);
		}
		else
		{
			return NULL;
		}
	}
	if (k==1)
	{
		return new Node(val, head);
	}
	int cnt =0;
	Node* tmp = head;
	while(tmp)
	{
		cnt++;
		if (cnt == k-1)
		{
			Node* newNode =  new Node(val);
			newNode->next = tmp->next; // always make the new link first and then delete the prev link
			tmp->next = newNode;
			break;
		}
		tmp = tmp->next;
	}
	return head;
}
int main() {
	vector<int> arr = {1,2,3,4,5,6};
	Node* head = convert(arr);
	print(head);
	cout << endl << "*** insert at kth place ***" << endl;
	head = insertatKth(7,3,head);
	print(head);
	return 0;
}