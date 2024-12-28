#include <iostream>
using namespace std;
//Multiple Inheritance and diamond problem 
// To solve diamond problem the class are inherited using virtual keyword
 
class Person
{
	public:
	string name="";
	int age=0;
};
class Teacher: virtual public Person
{
	public:
	string subject;
	void set(int tAge, string tName, string tSubject)
	{
		name = tName;
		age = tAge;
		subject = tSubject;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Subject:" << subject << endl;
	}
};
class Student : virtual public Person
{
	public:
	int rollNum;
	void set(int sAge, string sName, int sRollNum)
	{
		name = sName;
		age = sAge;
		rollNum = sRollNum;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "rollNum:" << rollNum << endl;
	}
};
class School: public Student, public Teacher
{
	public:
	void set(int sAge, string sName, string sSubject, int sRollNum)
	{
		name = sName;
		age = sAge;
		subject = sSubject;
		rollNum = sRollNum;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Subject:" << subject << endl;
		cout << "rollNum:" << rollNum << endl;
	}
};
 
int main() {
	School s;
	s.set(29,"Ashrami", "English", 001);
	s.display();
	return 0;
}