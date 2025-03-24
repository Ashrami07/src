#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        //find index of break point
        for (int i =n-2; i>=0;i--)
        {
            if (nums[i]<nums[i+1])
            {
                index = i;
                break;
            }
            else
            {
                index = -1;
            }
        }
        cout << index;
        if(index == -1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        //find num just greater than break
        for(int j=n-1; j>index; j--)
        {
            if (nums[j]>nums[index])
            {
                swap(nums[j],nums[index]);
                break;
            }
        }
        //sort the remaining elements
        reverse(nums.begin()+index+1,nums.end());
    }
};