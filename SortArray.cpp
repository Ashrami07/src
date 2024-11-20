#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
 
void sort(int a[5])
{
	for(int i=0; i<4;i++)
	{
		for (int j=0; j<4-i; j++)
		{
			if (a[j] > a[j+1])
			{
				// swap the values
				swap(a[j], a[j+1]);
			}
		}
	}
}
 
void print(int arr[5]){
	for(int i=0; i<5; i++)
	{
		cout << arr[i] << endl;
	}
}
 
bool checkSort(int arr[5])
{
	for (int i=1; i<=5; i++)
	{
		if (arr[i]>arr[i-1])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
 
int main() {
	// check if the array is sorted 
	int arr[5]= {23,75,12,45,78};
	bool check = checkSort(arr);
	if (check)
	{
		cout << "Sorted" << endl;
	}
	else
	{
		cout << "Not Sorted" << endl;
	}
	sort(arr);
	print(arr);
	return 0;
}