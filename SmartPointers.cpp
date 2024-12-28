#include <iostream>
using namespace std;
//Smart pointer
class SmartP
{
	private: 
	int *ptr;
	public:
	SmartP(int *sPtr =NULL){ptr = sPtr;}
	~SmartP()
	{
		delete ptr;
	}
	int &operator *()
	{
		return *ptr;
	}
};
 
int main() {
	SmartP sp(new int());
	*sp = 20;
	SmartP sp1(new int());
	*sp1 = 40;
	cout << *sp << endl;
	cout << *sp1 << endl;
	return 0;
}