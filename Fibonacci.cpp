#include<iostream>

using namespace std;

int main()
{
    //Fibonacci Series {0, 1, 1, 2, 3, 5, 8, 13}
    int a=0, b=1;
    cout << a << endl;
    cout << b << endl;
    for (int i =1 ; i<20; i++)
    {
    	int sum = a+b;
    	a= b;
    	b= sum;
        cout << sum<<endl;

    }
    return 0;
}