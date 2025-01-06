#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
//Operations on list
void print(list<int> &input_list)
{
	for (auto x : input_list)
	{
		cout << x << endl;
	}
}
void insert(list <int> &input_list, int insert_value){
	auto it = input_list.end();
	input_list.insert(it,insert_value);
}
void replace(list <int> &input_list, list <int> sub_sequence, int element)
{
	auto it = input_list.begin();
	it = find(input_list.begin(),input_list.end(),element);
	if (it == input_list.end())
	{
		return;
	}
	it = input_list.erase(it);
	input_list.insert(it, sub_sequence.begin(), sub_sequence.end());
}
int main() {
	list <int> input_list, sub_sequence;
	int size =3;
	int insert_value, input_element;
	cout << "Enter list elements: " << endl;
	for (int i =0;i<size;i++)
	{
		cin >> input_element;
	    input_list.push_back(input_element);
 
	}
	cout << "Enter value to be inserted " << endl;
	cin >> insert_value;
	cout << "Enter sub sequence: " << endl;
	for (int i =0;i<size;i++)
	{
		cin >> input_element;
	    sub_sequence.push_back(input_element);
 
	}
	insert(input_list, insert_value);
	print(input_list);
	replace(input_list,sub_sequence,insert_value);
	cout << "After Replace:" << endl;
	print(input_list);
	return 0;
}