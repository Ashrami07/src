#include <iostream>
#include <vector>
using namespace std;
// Moore's voting algo --- ele and its count is maintained untill the cnt =0; 
// check if the element remaining has count > a.size()/2
class Solution {
public:
    int majorityElement(vector<int>& a) {
        int cnt = 0;
        int ele = 0;
        for (int i = 0; i < a.size(); i++) {
            if (cnt == 0) {
                ele = a[i];
                cnt = 1;
            } else {
                if (ele == a[i]) {
                    cnt++;
                } else {
                    cnt--;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == ele) {
                count++;
            }
        }
        int n = (a.size()) / 2;
        if (count > n) {
            return ele;
        }
        return -1;
    }
};