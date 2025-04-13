#include <iostream>
using namespace std;
// Shallow copy 
class Shallow{
	public:
	int *data;
	Shallow(int num)
	{
		data = new int (num);
		cout << "Constructor called : " << *data << endl;
	}
	Shallow(const Shallow &obj)
	{
		data = obj.data;
		cout << "copy Constructor called : " << *data << endl;
	}
	~Shallow()
	{
		delete data;
		cout << "destructor called" << endl;
	}
	void print (string s)
	{
		cout << "obj is: " << s <<  "data is : " << *data <<endl;
	}
};

int main() {
	Shallow s1(10);
	Shallow s2 = s1;
	s1.print("s1");
	s2.print("s2");
	*s2.data = 20;
	s1.print("s1");
	s2.print("s2");
	return 0;
}