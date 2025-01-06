#include <iostream>
#include <list>
using namespace std;
//Josephus Problem removing kth index from a list of n find the last index which couldn't be removed
void print_ppl(list<int> ppl)
{
	for (auto x: ppl)
	{
		cout << x<< endl;
	}
 
}
int main() {
	int frequency = 3;
	int last_person =1;
	list <int> ppl = {0,1,2,3,4,5,6};
	list <int> ::iterator it = ppl.begin();
	while(ppl.size()>last_person)
	{
		for (int i=1; i<frequency; i++)
		{
			it++;
			if(it == ppl.end())
			{
				it = ppl.begin();
			}
		}
		it = ppl.erase(it);
		if(it == ppl.end())
			{
				it = ppl.begin();
			}
	}
	print_ppl(ppl);
	return 0;
}