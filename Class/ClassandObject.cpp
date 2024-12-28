#include <iostream>
using namespace std;
class Student{
	private:
		int rollNum=0;
		string name="";
		int *rollNumptr;
	public:
		Student(int sNum, string sName)
		{
			rollNum = sNum;
			name = sName;
			rollNumptr = new int(rollNum);
			cout << "calling constructor" << endl;
		}
		void print()
		{
				cout << "rollnum:" << rollNum << " Name: " << name << "Ptr:" << rollNumptr<< endl;
		}
		void set(int sNum, string sName)
		{
			rollNum = sNum;
			rollNumptr = new int(rollNum);
			name = sName;
		}
		~Student()
		{
			cout << "Deleting the obj" << endl;
		}
 
};
int main() {
	// constructors/desctructors
	int rNum = 1003;
	string name= "Ashrami";
	Student s1(1001, "shivani");
	s1.print();
	Student s2(rNum, name);
	s2.print();
	Student s3(s2);
	s3.set(1002, "chinmay");
	s3.print();
	s2.print();
	return 0;
}