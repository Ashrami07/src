#include <iostream>
using namespace std;
//Copy Constructor
class Student{
	private:
		string name="";
		int *rollNumptr;
	public:
		Student(){}
		Student(int sNum, string sName)
		{
			name = sName;
			rollNumptr = new int(sNum);
			cout << "calling constructor" << endl;
		}
		Student(Student &obj)
		{
			cout << "Copy Constructor called" << endl;
			name = obj.name;
			rollNumptr = obj.rollNumptr;
 
		}
		void print()
		{
				cout << "rollnum:" << *rollNumptr << " Name: " << name <<endl;
		}
		void set(int sNum, string sName)
		{
			rollNumptr = new int(sNum);
			name = sName;
		}
		~Student()
		{
			cout << "Deleting the obj" << endl;
		}
 
};
int main() {
	// constructors/desctructors
	string name= "aashray";
	Student s1(1001, "shivani");
	Student s2(1003, name);
	Student s3(s2);
	s3.set(1002, "chinmay");
	s3.print();
	s2.print();
	s1.print();
	return 0;
}