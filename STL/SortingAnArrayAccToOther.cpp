#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
// Sorting an array according to another array
int main() {
	int arr1[] = {1,4,2,5};
	int arr2[] = {'a','e','g','h'};
	pair<int,char> arr[4];
	int n =4;
	for (int i=0;i<n; i++)
	{
		arr[i]= {arr1[i],arr2[i]};
	}
	sort (arr,arr+n);
	for (auto x: arr)
	{
		cout << x.second << endl;
	}
 
	return 0;
}