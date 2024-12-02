#include <iostream>
using namespace std;
 
int sum (int arr[], int n)
{
	int sum =0;
	for (int x=0; x<n;x++)
	{
		sum =sum +arr[x];
	}
	return sum;
}
 
int findMax(int a[], int n)
{
	int max=a[0];
	for (int x=1; x<n;x++)
	{
		if (a[x]>max)
		{
			max= a[x];
		}
	}
	return max;
}
 
int average(int a[], int n)
{
	int avg;
	int sum=0;
	for (int x=0; x<n;x++)
	{
		sum =sum +a[x];
	}
	avg = sum/n;
	return avg;
}
 
int main() {
	// sum of an array
	int n;
	cout << "Enter the size of the array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter Elements of an array" << endl;;
	for (int x=0; x<n;x++)
	{
		cin >> arr[x];
	}
	cout << "Sum :" << sum(arr, n) << endl;
	cout << "Average :" << average(arr, n) << endl;
	cout << "Max :" << findMax(arr, n) << endl;
	return 0;
}