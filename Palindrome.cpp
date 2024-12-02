#include <iostream>
using namespace std;
 
bool checkIfPalindrome(string s, int len)
{
	int i=0;
	int j=len-1;
	while (i<j)
	{
		if (s[i]!=s[j])
		{
			return false;
		}
		else
		{
			i++;
			j--;
		}
	}
	return true;
}
 
int main() {
	//Check palindrome
	string s;
	cout << "Enter a string" << endl;
	cin >> s;
	int len = s.length();
	if (checkIfPalindrome(s,len))
	{
		cout << "given string is a plaindrome" << endl;
	}
	else 
	{
		cout << "Given string is not a palindrome" << endl;
	}
	return 0;
}