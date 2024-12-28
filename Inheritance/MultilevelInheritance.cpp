#include <iostream>
using namespace std;
//Multi Level Inheritance
class GrandParent{
	protected:
		string name = "Mangilal Ji";
		string surname = "Shukla";
	public:
	void displayName()
	{
		cout << "Grand Father Full Name:" << name << " "<< surname << endl;
	}
};
class Parent : public GrandParent
{
	protected:
		string name= "Vinod Ji";
	public:
	void displayName()
	{
		cout << "Father Full Name:" << name << " "<< surname << endl;
	}
};
class Child : public Parent
{
	protected:
		string name= "Ashrami";
	public:
	void displayName()
	{
		cout << "Full Name:" << name << " "<< surname << endl;
	}
};

int main() {
	GrandParent gp;
	Parent p;
	Child c;
	c.displayName();
	p.displayName();
	gp.displayName();
	return 0;
}