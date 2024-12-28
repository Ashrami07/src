#include <iostream>
using namespace std;
// Panagram is when all the alphabets are present
bool checkpanagram(string s, int n)
{
	if (n<26)
	{
		return false;
	}
	bool visited[26]={0};
	for (int i=0; i<n; i++)
	{
		char x =s[i];
		if (x>='a'&& x<='z')
		{
			visited[x-'a'] = true;
		}
		if (x>='A'&& x<='Z')
		{
			visited[x-'A'] = true;
		}
	}
	for (int i=0; i<26; i++)
	{
		if (visited[i]==false)
		{
			return false;
		}
	}
	return true;
}
 
int main() {
	// Panagram {Visited Array}
	string s1;
	cout << "Enter a string" << endl;
	getline(cin, s1);
	int n = s1.length();
	bool isPanagram = checkpanagram(s1, n);
	if (isPanagram)
	{
		cout << "Given string is a panagram" << endl;
	} else {
		cout << "given string is not a panagram" << endl;
	}
	return 0;
}