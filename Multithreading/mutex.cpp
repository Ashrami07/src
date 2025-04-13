#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

condition_variable cv ;
mutex mtx ;
bool ready = false;
void printNum(int j, int num)
{
	unique_lock <mutex> lck(mtx);  
	// mtx.lock();
	for (int i =j; i<num; i++)
	{
		cout << i << endl;
	}
	if (!ready)
	{
		cv.wait(lck);
	}
	// mtx.unlock();
}

int main() {
	thread t1(printNum,0,5);
	ready = true;
	cv.notify_all();
	t1.join();
	thread t2(printNum,5,10);
	t2.join();
	// this_thread::sleep_for(chrono::seconds(1));
	return 0;
}