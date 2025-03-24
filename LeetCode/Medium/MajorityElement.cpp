#include <iostream>
#include <vector>
#include <map>
using namespace std;

//better approach to calculate majority
class Solution {
public:
    int majorityElement(vector<int>& a) {
        int maxcnt = 0;
        int n = a.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        for (auto x : mp) {
            if (x.second > (a.size() / 2)) {
                return x.first;
            }
        }
        return -1;
    }
};