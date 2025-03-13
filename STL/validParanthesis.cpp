#include <iostream>
#include <stack>
using namespace std;
//Balanced paranthesis
void print(stack<char> c, int n)
{
	for(int i=0; i<n;i++)
	{
		cout << c.top() << " ";
		c.pop();
	}
	cout << endl;
	
}

    bool isValid(string s) {
        stack<int> st;
        if (s.length()==1)
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else if (s[i] == '{') {
                st.push(s[i]);
            } else if (s[i] == '[') {
                st.push(s[i]);
            } else if (s[i] == ')') {
                if (!(st.empty())&& (st.top() == '(')) {
                    st.pop();
                } else {
                    return false;
                }
            } else if (s[i] == '}') {
                if (!(st.empty())&& (st.top() == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            } else if (s[i] == ']') {
                if (!(st.empty())&& (st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
int main() {
	string str;
	cout << "enter input" << endl;
	cin >> str;
	bool isv;
	isv = isValid(str);
	if (isv)
	{
		cout << "Input is balanced" << endl;
	}
	else{
		cout << "Input is imbalanced" << endl;
	}
	return 0;
}