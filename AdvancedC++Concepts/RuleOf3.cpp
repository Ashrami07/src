#include <iostream>
using namespace std;
// Rule of 3:  imp to write userdefined special memeber functions to manage memory properly.
// this rule comes when assigning dynamic memeory so always use pointers,new operator

class RuleOf3 {
	private:
	int* data;
	public:
	RuleOf3(int val){
		data = new int (val);
		cout << "Default value is :" << *data << endl; 
	}
	// Important to write descrutor
	~RuleOf3()
	{
		delete data;
		cout << "destructor called " << endl;
	} 
	
	//Important to write copy constructor
	RuleOf3(const RuleOf3 &obj)
	{
		data = new int(*obj.data);
		cout << "Copy constructor  value is :" << *data << endl; 
	}
	// Important to write assignment operator
	RuleOf3& operator = (const RuleOf3 &obj)
	{
		if (this != &obj)
		{
			delete data;
			data = new int(*obj.data);
			cout << "Assignment operator  value is :" << *data << endl; 
		}
		return *this;
	}
	
};
int main() {
	int num = 10;
	RuleOf3 r3(num);
	RuleOf3 r4 = r3; // Copy constructor
	RuleOf3 r5(5);
	r5 =r4; // assignment operator
	return 0;
}