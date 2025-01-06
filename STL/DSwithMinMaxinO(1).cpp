#include <iostream>
#include <deque>
using namespace std;
//DS with min/max operations in O(1)
void insertMin(deque <int> &dq, int val)
{
	dq.push_front(val);
}
void insertMax(deque <int> &dq, int val)
{
	dq.push_back(val);
}
void getMin(deque <int> dq)
{
	auto it = dq.begin();
	cout << "getMin:" << *it << endl; 
}
void getMax(deque <int> dq)
{
	auto it = dq.end()-1;
	cout << "getMax:" << *it << endl; 
}
void print(deque <int> dq)
{
	for (auto x : dq)
	{
		cout << x << " ";
	}
	cout << endl;
}
void extractMin(deque <int> &dq)
{
	dq.pop_front();
	cout << "extractMin" << endl; 
	print(dq);
}
void extractMax(deque <int> &dq)
{
	dq.pop_back();
	cout << "extractMax" << endl;
	print(dq);
}
int main() {
	deque <int> dq;
	insertMin(dq,5);
	insertMax(dq,10);
	insertMin(dq,3);
	insertMax(dq,15);
	print(dq);
	getMin(dq);
	getMax(dq);
	insertMin(dq,1);
	getMin(dq);
	extractMax(dq);
	insertMax(dq,20);
	getMax(dq);
	print(dq);
	extractMin(dq);
	return 0;
}
