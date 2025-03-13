#include <iostream>
#include <stack>
using namespace std;
//Balanced paranthesis
bool matching (char a, char b)
{
	if ((a=='c'&& b ==')')||(a=='{'&& b =='}')||(a=='['&& b ==']'))
	{
		return true;
	}
	return false;
 
}
bool check( string str)
{
	stack <char> charStack;
	for (auto x: str)
	{
		if ((x == '{')||(x == '(')||(x == '['))
		{
			charStack.push(x);
		}
		else{
			if (charStack.empty())
			{
				return false;
			}
			else if(matching(charStack.top(),x))
			{
				return true;
			}
			else
			{
				charStack.pop();
				return false;
			}
		}
	}
	if (charStack.empty())
	{
		return true;
	}
}
int main() {
	string str;
	cout << "enter input" << endl;
	cin >> str;
	if (check(str))
	{
		cout << "Balanced" << endl;
	}
	else{
		cout << "Imbalanced" << endl;
	}
	return 0;
}