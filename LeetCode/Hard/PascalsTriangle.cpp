#include <vector>
using namespace std;
class Solution {
public:
    vector<int> generateRows(int row)
    {
        long long ans =1;
        vector<int> resv ;
        resv.push_back(1);
        for (int col=1; col<row;col++)
        {
            ans = ans *(row-col);
            ans = ans / col;
            resv.push_back(ans);
        }
        return resv;
    }
    vector<vector<int>> generate(int numRows) {
       vector <vector<int>> ansv ;
       for (int i=1; i<=numRows; i++)
       {
        ansv.push_back(generateRows(i));
       }
       return ansv;
    }
};