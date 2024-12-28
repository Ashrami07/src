#include <iostream>
using namespace std;
//Smart Pointer example 2
class Test
{
	public:
	int x;
	int y; 
	Test(int a=0, int b=0)
	{
		x=a;
		y=b;
		cout << x <<"  "<< y << endl;
	}
	~Test(){cout << "Destructor called" << endl;}
};
class SP: public Test
{
	private:
	Test *tPtr;
	public:
	SP(Test *ptr=NULL)
	{
		tPtr = ptr;
	}
	~SP()
	{
		delete tPtr;
	}
	Test &operator *(){return *tPtr;}
	Test *operator ->(){return tPtr;}
	void display()
	{
		cout << tPtr->x << endl;
		cout << tPtr->y << endl;
	}
};
 
int main() {
	SP sp(new Test(10,20));
	sp.display();
	return 0;
}