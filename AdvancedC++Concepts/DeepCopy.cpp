#include <iostream>
using namespace std;
// Deep copy 
class Deep{
	public:
	int *data;
	Deep(int num)
	{
		data = new int (num);
		cout << "Constructor called : " << *data << endl;
	}
	Deep(const Deep &obj)
	{
		data = new int (*obj.data);
		cout << "copy Constructor called : " << *data << endl;
	}
	~Deep()
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
	Deep s1(10);
	Deep s2 = s1;
	s1.print("s1");
	s2.print("s2");
	*s2.data = 20;
	s1.print("s1");
	s2.print("s2");
	return 0;
}