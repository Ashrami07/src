#include <iostream>
#include <vector>
using namespace std;
// Vector
void printVector(vector<int> v )
{
	for (auto x: v)
	{
		cout << x << endl;
	}
}
 
 
int main() {
	vector <int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(80);
	v.push_back(90);
	int size = v.size();
	cout << "Size: " << size << endl;
	printVector(v);
	v.pop_back();
	printVector(v);
	return 0;
}