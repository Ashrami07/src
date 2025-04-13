#include <iostream>
#include <vector>
using namespace std;
// Linked List

class Node
{
	public:
	int data;
	Node * next;
	Node(int data1, Node* next1)
	{
		data = data1;
		next = next1;
	}
	Node (int data1)
	{
		data = data1;
		next = nullptr;
	}
};

Node* convertArraytoList(vector<int> &arr)
{
	Node* head = new Node(arr[0]);
	Node* mover = head;
	
	for (int i=1; i<arr.size();i++)
	{
		Node* tmp = new Node (arr[i]);
		mover ->next = tmp;
		mover = tmp;
	}
	return head;
}

int length(Node* head){
	int cnt = 0;
	Node* tmp = head;
	while(tmp)
	{
		cnt ++;
		tmp = tmp->next;
	}
	return cnt;
}

bool searchll(Node* head, int x)
{
	Node* temp = head;
	while(temp)
	{
		if(temp->data == x)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
}

//Remove Head
Node* removeHead(Node* start)
{
	Node* head =  start->next;
	start->next = NULL;
	free(start);
	return head;
}

//Remove Tail
Node* removeTail(Node* start)
{
	Node* tmp =  start;
	if (start->next == NULL || start == NULL)
	{
		return NULL;
	}
	while(tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	delete(tmp->next);
	tmp->next = nullptr;
	return start;
}

int main() {
	vector<int> arr = {1,2,3,4,5};
	Node* res = convertArraytoList(arr);
	cout << "result: " << res->data << endl;
	Node* temp = res;
	while(temp)
	{
		cout << temp->data << " " ;
		temp = temp->next;
	}
	cout << "Length of LL: " << length(res) << endl;
	bool check = searchll(res,0);
	if (check)
	{
		cout << "Value is present" << endl;
	}
	else
	{
		cout << "Value is absent" << endl;
	}
	
    //Uncomment to delete head
	// //delete head of LL
	// Node* nhead = removeHead(res);
	// cout << "Head data is : " << nhead->data;
	
	
	//Delete tail of LL
	cout << "*********remove tail********" << endl;
	res = removeTail(res);
	while(res)
	{
		cout << res->data << " " ;
		res = res->next;
	}
	
	return 0;
}