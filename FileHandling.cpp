#include <iostream>
#include <fstream>
using namespace std;
//File handling 
 
int main() {
	ofstream fout;
	fout.open("tmp.txt");
	fout << "hello";
	fout.close();
 
	ifstream fin;
	fin.open("tmp.txt");
	char ch = fin.get();
 
	if(!fin.eof())
	{
		cout << ch << endl;
		ch = fin.get();
	}
	fin.close();
	return 0;
}