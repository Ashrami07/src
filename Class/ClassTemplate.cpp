#include <iostream>
using namespace std;
//Class Template
template<typename T>
struct Pair{
	T x, y;
	Pair(T i,T j)
	{
		x= i;
		y=j;
	}
	T getFirst(){return x;}
	T getSecond(){return y;}
	
};

int main() {
	Pair<int> P1(10,20);
	Pair<int> P2(20,10);
	cout <<P1.getSecond() << endl;
	cout <<P2.getSecond() << endl;
	return 0;
}