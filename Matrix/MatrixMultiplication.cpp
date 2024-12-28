#include <iostream>
using namespace std;


int main() {
	//Matrix Multiplication : given two matrix return a new matrix with multiplied o/p
	int n;
	cout << "enter matix size:" << endl;
	cin  >> n;
	int arr1[n][n], arr2[n][n], newMatrix[n][n];
	//Filling matirx 1
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> arr1[i][j];
		}
	}
	//Filling matirx 2
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	//Matrix Multiplication
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			newMatrix[i][j]=0;
			for ( int k=0; k<n; k++)
			{
				newMatrix[i][j] = newMatrix[i][j]+(arr1[i][k]*arr2[k][j]);
			}
		}
	}
	//Print matrix
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << newMatrix[i][j] << endl;
		}
	}
	return 0;
}