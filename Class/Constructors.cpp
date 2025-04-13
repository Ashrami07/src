#include <iostream>
using namespace std;
class Student{
	private:
	int a;
	int b;
	public:
	Student(){ // default
		a = 0;
		b = 0;
	} 
	Student(int x, int y) { // parameterized constructor
		a = x;
		b = y;
	}
	Student (const Student &obj) // copy constructor
	{
		a = obj.a;
		b= obj.b;
	}
	void display()
	{
		cout << "A: " << a << "B: " << b << endl; 
	}
};

int main() {
	Student s;
	s.display();
	Student s2(10,30);
	s2.display();
	Student s3 = s2;
	s3.display();
	return 0;
}