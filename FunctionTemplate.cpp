#include <iostream>
using namespace std;
//Function Template
template <typename T>
	T maxT(T x, T y)
	{
		if (x>y)
		return x;
		else
		return y;
	}

int main() {
	cout << maxT(3,4) << endl;
	cout << maxT('z','h') << endl;
	
	return 0;
}