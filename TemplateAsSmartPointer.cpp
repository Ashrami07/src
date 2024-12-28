#include <iostream>
using namespace std;
// Smart pointer using template
template <class T>
class SP{
	private:
	T *ptr;
	public:
	SP(T *p=NULL)
	{
		ptr = p;
	}
	~SP()
	{
		cout << "Calling desturctor";
		delete ptr;
	}
	T &operator *(){return *ptr;}
	T *operator ->(){return ptr;}
};
 
int main() {
	SP <int>sp(new int());
	*sp=20;
	cout<< *sp << endl;
	return 0;
}