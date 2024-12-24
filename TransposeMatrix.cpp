#include <iostream>
using namespace std;
 
int main() {
	// Transpose an array
	cout << "Enter mXn" << endl;
	int m,n;
	cin >> m >> n;
	cout << "Array of size: " << m << "x" << n<< endl;
	int arr[m][n];
	int newArr[n][m];
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n;j++)
		{
			cout << "Enter array values:" << endl;
			cin >> arr[i][j]; 
			cout << arr[i][j] << endl;
		}
	}
	//Transpose
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n;j++)
		{
 
			newArr[j][i] = arr[i][j]; 
		}
	}
	//Print
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n;j++)
		{
			cout <<"new array: "<<newArr[i][j] << endl;
		}
	}
 
	return 0;
}