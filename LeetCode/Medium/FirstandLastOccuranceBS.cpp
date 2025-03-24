#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:

    int first(vector <int> nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n-1;
        int f=-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]==target)
            {
                high = mid-1;
                f = mid;
            }
            else if (nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid -1;
            }
        }
        return f;
    }

    int last(vector <int> nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n-1;
        int l=-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if (nums[mid]==target)
            { low = mid+1;
               l = mid;
            }
            else if (nums[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid -1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=-1,l=-1;
        vector<int> v;
        f = first(nums,target);
        if (f==-1)
        {
            return {-1,-1};
        }
        v.push_back(f);
        l= last(nums,target);
        v.push_back(l);
        return v;   
    }
};