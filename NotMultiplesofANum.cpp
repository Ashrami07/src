#include<iostream>

using namespace std;

int main(){
	// Numbers smaller than num and not a multiple of num
    int num, upto;
    cout << "Enter a number &count of multiples " << endl;
    cin >> num ;
    cin >> upto;
    for (int i=1; i<=upto; i++)
    {
       if ( (i%num==0))
       {
       	continue;
       }
       cout << i << endl;
    }
    return 0;
}