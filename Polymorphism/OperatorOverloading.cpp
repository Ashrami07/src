#include <iostream>
using namespace std;
//Operator Overloading
class Complex
{
	private:
	int real;
	int img;
	public:
	Complex(int r=0, int i=0):real(r), img(i){}
	Complex operator +(Complex const &obj)
	{
		Complex output;
		output.real = real+obj.real;
		output.img = img+ obj.img;
		return output;
	}
	void print ()
	{
		cout << "real: " << real << " " << "Img: " << img << endl;
	}
};

int main() {
	Complex c1(10,20), c2(20,50);
	Complex res = c1+c2;
	res.print();
	return 0;
}