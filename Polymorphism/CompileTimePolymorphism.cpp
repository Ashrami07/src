#include <iostream>
using namespace std;
// Function overloading complie time polymorphism
int add(int a,int b)
{
	return (a+b);
}
string add(string name, string surname)
{
	string fname = name +" " + surname; 
	return (fname);
}
int main() {
	cout << add(5,2) << endl;
	cout << add("Ashrami", "Shukla") << endl;
	return 0;
}