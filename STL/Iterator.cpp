#include <iostream>
#include <vector>
using namespace std;
//Iterators
int main() {
	vector <int> v = {10,20,30,40,50};
	vector <int>:: iterator i = v.begin();
	cout << "Begin (): " << *i << endl;
	i = next(i);
	cout << "next(i): " << *i << endl;
	i = next(i,2);
	cout << "next(i,2): " << *i << endl;
	i = prev(i);
	cout << "previous(i): " << *i << endl;
	advance(i,2);
	cout << "advance(i,2): " << *i<< endl;
	return 0;
}
