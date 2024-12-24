#include <iostream>
using namespace std;
 
// Two strings are said to be anagram if they have same alphabet but order can be changed listen/silent
 
bool checkAnagram(string s1, string s2, int n)
{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for (int i=0; i<n; i++)
	{
			if (s1[i]!=s2[i])
			{
				return false;
			}
	}
	return true;
}
 
int main() {
	// find Anagram
	string s1, s2;
	cout << "Enter two strings" << endl;
	cin >> s1 >> s2;
	if (s1.length()!=s2.length())
	{
		cout << "Strings are not anagram" << endl;
	}
	int n = s1.length();
	bool isAnagram = checkAnagram(s1, s2, n);
	if (isAnagram)
	{
		cout << "Given string is an anagram" << endl;
	}
	else
	{
		cout << "Given string is not anagram" << endl;
	}
	return 0;
}