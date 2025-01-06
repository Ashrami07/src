#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Sort students by marks
 
int main() {
	vector <int> students= {101,106,104,105,102};
	vector <int> marks = {60,80,50,70,20};
	vector <pair<int,int>> student_detail;
	int size = students.size();
	for (int i=0; i<size; i++)
	{
		student_detail.push_back(make_pair(marks[i],students[i]));
	}
	sort(student_detail.begin(),student_detail.end(),greater<>());
	for(auto x:student_detail)
	{
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}