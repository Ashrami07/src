#include <iostream>
#include <vector>
using namespace std;
//Reverse order of Items
void printV(vector<char> vs)
{
	for (auto x: vs)
	{
		cout << x << " ";
	}
	cout << endl;
}
void reverse(vector<char> vs, int n)
{
	cout << "Reversed" << endl;
	for (int i=n-1; i>=0; i--)
	{
		cout << vs[i]<< " ";
	}
}
 
int main() {
	string s;
	vector <char> vString;
	cout << "Enter a string " << endl;
	cin >> s;
	for (int i =0; i <s.length(); i++)
	{
		vString.push_back(s[i]);
	}
	printV(vString);
	reverse(vString, s.length());
	return 0;
}