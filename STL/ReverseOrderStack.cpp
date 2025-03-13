#include <iostream>
#include <stack>
using namespace std;
//Reverse string stack
void reverse(stack<char> &sc, int n)
{
	cout << "reverse" << endl;
	for (int i=0; i<n; i++)
	{
		cout << sc.top() << " ";
		sc.pop();
	}
}
int main() {
	string s;
	cout << "Enter string" << endl;
	cin >> s;
	stack<char> sChar;
	for (int i =0;i<s.length(); i++)
	{
		sChar.push(s[i]);
	}
	reverse(sChar, s.length());
	return 0;
}