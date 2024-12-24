#include <iostream>
using namespace std;
 
int main() {
	// One extra char in string
	string s1,s2;
	string extra;
	int sum1, sum2;
	cout << "Enter two strings" << endl;
	cin >> s1 >> s2;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	{
		for (int i=0; i<s1.length(); i++)
		{
			if (s1[i]!=s2[i])
			{
				cout << "Extra char is :" << s2[i] << endl;
			}
		}
 
	}
	return 0;
}