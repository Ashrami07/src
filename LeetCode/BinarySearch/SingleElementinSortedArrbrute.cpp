#include <vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int single =0;
        if (n==1)
        {
            single = nums[0];
            return single;
        }
        for (int i =0; i<n; i++)
        {
            if (i ==0)
            {
                if (nums[i]!=nums[i+1])
                {
                    single = nums[i];
                    return single;
                }
            } else if (i== n-1)
            {
                 if (nums[i]!=nums[i-1])
                {
                    single = nums[i];
                    return single;
                }
            }
            else if (nums[i]!=nums[i+1]&& nums[i]!=nums[i-1])
            {
                single = nums[i];
                return single;
            }
        }
        return single;
    }
};