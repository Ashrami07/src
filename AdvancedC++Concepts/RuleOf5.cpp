#include <iostream>
using namespace std;
//Rule of 5

class RuleOf5{
	private:
	int *data;
	public:
	RuleOf5(int num)
	{
		data = new int(num);
		cout << "Constructor called data: " << *data << endl; 
	}
	~RuleOf5()
	{
		delete data;
		cout << "Descrutor called " << endl;
	}
	// copy constructor
	RuleOf5( const RuleOf5 &obj)
	{
		data = new int(*obj.data);
		cout << "copy constructor called data: " << *data << endl; 
	}
	// copy assignment operator
	RuleOf5& operator= (const RuleOf5 &obj)
	{
		if (this != &obj)
		{
			delete data;
			data = new int(*obj.data);
		}
		cout << "assignment oprator called data: " << *data << endl;
		return *this;
	}
	// move constructor
	RuleOf5(RuleOf5&& obj) noexcept
	{
		data = obj.data;
		obj.data = nullptr;
		cout << "move constructor called data moved from : " << obj.data << " to :" << *data << endl;
	}
	// move assignment operator
	RuleOf5& operator=(RuleOf5&& obj) noexcept
	{
		if (this != &obj){
			delete data;
			data = obj.data;
			obj.data = nullptr;
			cout << "move assignment operator called data moved from : " << obj.data << " to :" << *data << endl;
		}
		return *this;
	}
};

int main() {
	RuleOf5 r1(5);
	RuleOf5 r2 = r1; // copy constructor
	RuleOf5 r3(10);
	r3 = r2; // copy assignment operator
	RuleOf5 r4(15);
	RuleOf5 r5 = move(r4); // move constructor
	RuleOf5 r6(20);
	r6 = move(r1); // move assignment operator
	return 0;
}