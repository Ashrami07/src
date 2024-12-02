#include <iostream>
using namespace std;
int checkDistinct(int arr[], int n)
{
	int count;
	for (int i =0; i<n; i++)
	{
		if (arr[i]!=arr[i+1])
		{
			count++;
		}
	}
	return count;
}
 
int main() {
	// Distinct elements in an array
	int n;
	cout << "Enter size of arr" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter Elements of an array" << endl;;
	for (int x=0; x<n;x++)
	{
		cin >> arr[x];
	}
	cout << "Distinct number in array are:" << checkDistinct(arr, n)<< endl;
	return 0;
}