#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
//Pairs STL
int main() {
	pair <int , int> p(10,20);
	pair <int , int> p0(05,10);
	pair <int , string> p1(1001,"Shivani");
	cout << "First: " << p.first << endl;
	cout << "Second: " << p.second << endl;
	cout << "RollNum: " << p1.first << endl;
	cout << "Name: " << p1.second << endl;
	pair <string, string> p3 = make_pair ("Aashray","Pandya");
	cout<< "Name: " << p3.first << " " << "Surname: " << p3.second << endl;
	cout << "check if p<p0: " << (p<p0) << endl;
	cout << "check if p>p0: " << (p>p0) << endl;
	cout << "check if p==p0: " << (p==p0) << endl;
	cout << "check if p!=p0: " << (p!=p0) << endl;
	return 0;
}