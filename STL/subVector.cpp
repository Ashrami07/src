#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Keeping track of pervious index after sorting
void print_vector(vector <pair<int,int>> vec)
{
	for (auto x: vec)
	{
		cout << x.first << " " << x.second << endl;
	}
}
 
int main() {
	vector <int> orginal_vector = {10,60,30,40};
	vector <pair<int,int>> updated_vector;
	for (int i=0; i<orginal_vector.size(); i++)
	{
		updated_vector.push_back(make_pair(orginal_vector[i],i));
	}
	sort(updated_vector.begin(),updated_vector.end());
	print_vector(updated_vector);
 
	return 0;
}