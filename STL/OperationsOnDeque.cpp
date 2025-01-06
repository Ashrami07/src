#include <iostream>
#include <deque>
using namespace std;
//deque
void print(deque <int> d_input)
{
	for (auto x: d_input)
	{
		cout << x << endl;
	}
}
 
int main() {
	deque <int> d_input;
	d_input.push_back(10);
	d_input.push_back(20);
	d_input.push_front(01);
	d_input.push_front(02);
	cout << "Front: " << d_input.front() << endl;
	cout << "Back: " << d_input.back() << endl;
	auto it = d_input.begin();
	cout << "Iterator: " << *it << endl;
	d_input.insert(it,4,3);
	print(d_input);
	d_input.pop_front();
	cout << "After Pop front" << endl;
	print(d_input);
	d_input.pop_back();
	cout << "After Pop back" << endl;
	print(d_input);
	return 0;
}