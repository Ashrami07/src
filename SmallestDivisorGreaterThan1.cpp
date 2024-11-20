#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number for which the divisor" << endl;
    cin >> num;
    for (int i = 2; i<=num; i++)
    {
        if (num%i == 0)
        {
            cout << "Smallest Divisor is :" << i << endl;
            break;
        }
    }
    return 0;
}