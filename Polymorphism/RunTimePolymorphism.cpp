#include <iostream>
using namespace std;
//Function Overidding or Run time polymorphism
class Base{
	public:
	virtual void show()
	{
		cout << "Inside Base" << endl;
	}
 
};
class Derived: public Base{
	public:
	void show()
	{
		cout << "Inside Derived" << endl;
	}
};
 
int main() {
	Derived d;
	Base b;
	b.show();
	d.show();
	Base *bptr = &d; //Base class pointer calling derived class object.
	bptr->show(); // Inside Derived will be shown
	return 0;
}