#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int pos =n;
        int low =0, high= n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]>=target)
            {
                high = mid-1;
                pos = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return pos; 
    }
};