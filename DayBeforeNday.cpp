#include <iostream>
using namespace std;

int main() {
	//Day before n days using modulus of 7 we can get values from 0-6
	int a, n;
	cout << "enter current day number: [0:sun,1:mon,2:tue,3:wed,4:thu,5:fri,6:sat" << endl;
	cin >> a;
	cout<< "enter the day" << endl;
	cin >> n;
	int day = n%7;
	int currDay = a - day;
	if (currDay>0)
	{
		cout << "day is" << currDay << endl;
	}
	else{
	cout << "day is:" << currDay+7 << endl;
}
	return 0;
}