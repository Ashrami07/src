#include <iostream>
#include <utility>
using namespace std;
//Pairs STL
int main() {
	pair <int , int> p(10,20);
	pair <int , string> p1(1001,"Shivani");
	cout << "First: " << p.first << endl;
	cout << "Second: " << p.second << endl;
	cout << "RollNum: " << p1.first << endl;
	cout << "Name: " << p1.second << endl;
	return 0;
}