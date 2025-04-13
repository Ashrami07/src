#include <vector>
#include <map>
using namespace std;


class Solution {
public:
/*hashing is used to store the value and count, we check if the count of any 
value is equal to the minimum occurance then it will definately be our ans and we push it back.*/
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector <int> res ;
        int mino = n/3;
        map <int,int> r;
        for (int i=0; i<n;i++)
        {
            r[nums[i]]++;
            auto x= r.find(nums[i]) ;
            if (x!= r.end())
            {
                if (x->second == mino+1)
                res.push_back(x->first);
            }
        }
        return res;
    }
};