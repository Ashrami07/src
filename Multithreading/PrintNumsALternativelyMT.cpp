#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;
// two thread print o/p synchronously
int currval = 1;
const int maxval =  6;
condition_variable cv;
mutex mtx;

//printOdd Values
void printOdd()
{
	
	while(currval <=maxval)
	{
		unique_lock <mutex> lck(mtx);
		if (currval % 2 != 1)
		{
			cv.wait(lck);
		}
		if (currval <=maxval)
		{
			cout << currval++ << " ";
		}
		cv.notify_all();
	}
}
//printeven values
void printEven()
{
		while(currval <=maxval)
	{
		unique_lock <mutex> lck(mtx);
		if (currval % 2 != 0)
		{
			cv.wait(lck);
		}
		if (currval <=maxval)
		{
			cout << currval++ << " ";
		}
		cv.notify_all();
	}
	
}
int main() {
	thread t1(printOdd);
	thread t2 (printEven);
	t1.join();
	t2.join();
	return 0;
}