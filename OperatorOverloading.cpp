#include <iostream>
using namespace std;
 
struct Complex
{
	int real;
	int img;
	char i = 'i';
};
 
Complex add(Complex num1, Complex num2)
{
	Complex output;
	output.real = num1.real+num2.real;
	output.img = num1.img+ num2.img;
	return output;
}
 
int main() {
	// Adding compleax numbers
	// (real+real) (imaginary+imaginary)
	Complex num1, num2, sum;
	cout << "Enter two complex numbers" << endl;
	cin >> num1.real >> num1.img >> num2.real >> num2.img;
	sum = add(num1,num2);
	cout << "Sum of two complex number: "<< sum.real << "+" << sum.img<< sum.i << endl;
	return 0;
}