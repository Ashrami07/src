#include <iostream>
using namespace std;
 
bool checkifsort(int arr[], int n)
{
	for (int i=1; i<n; i++)
	{
			if (arr[i]<arr[i-1])
			{
				cout << "Not a sorted array" << endl;
				return false;
			}
	}
	cout << "Its a sorted Array" <<endl;
	return true;
}
int main() {
	// check if array is sorted
	int a[]={10,20,50,40};
	int n = sizeof(a)/sizeof(a[0]);
	checkifsort(a, n);
	return 0;
}
