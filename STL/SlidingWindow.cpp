#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Sliding Window
void print(vector <int> v)
{
	for (auto x: v)
	{
		cout << x << " ";
	}
	cout << endl;
}
int main() {
	int k;
	cout << "Enter k" << endl;
	cin >> k;
	vector <int> subArray;
	vector <int> v = {10,8,5,12,15,7,6};
	for(int i=0;i<v.size()-k+1;i++)
	{
		int maxVal =v[i];
		for (int j=i+1; j<k+i; j++)
		{
			maxVal = max(v[j], maxVal);
		}
		cout << maxVal << endl;
	}
	return 0;
}