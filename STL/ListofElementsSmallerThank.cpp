#include <iostream>
#include <vector>
using namespace std;
// List of smaller elements arr,size, k
 
void find_elements_smaller_than_K(vector <int> v, vector <int> &sV,int k)
{
	for (auto x :v){
		if (x<k){
			sV.push_back(x);
		}
	}
}
 
int main() {
	vector <int> vector_elements = {10,90,30,40,50,20,70};
	vector <int> smaller_elements;
	cout << "enter k value ranging from 10-70" << endl;
	int k;
	cin >> k;
	find_elements_smaller_than_K(vector_elements,smaller_elements,k);
	for (auto x: smaller_elements){
		cout << x << " ";
	}
	return 0;
}
