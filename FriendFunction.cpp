#include <iostream>
using namespace std;
//Friend Function and friend class
class Student;
class Printer
{
	public:
	void print(const Student &sObj);
};
class Display
{
	public:
	void display(const Student &sObj);
};
class Student
{
	private:
	string name;
	int id;
	public:
	friend void Printer::print(const Student &sObj);
	friend class Display;
	Student(string sName, int sId){
		name = sName;
		id = sId;
	}
	~Student(){}
};
void Printer::print(const Student &sObj)
{
	{
		cout << "name: " << sObj.name <<endl;
		cout << "id: " << sObj.id << endl;
	}
}
int main() {
	Student s("Ashrami",101);
	Printer p;
	p.print(s);
	return 0;
}