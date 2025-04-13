#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
       int n = arr.size();
       vector <int> temp ;
       int zero = -1;
       for(int i=0; i<n; i++)
       {
           if (arr[i]==0)
           {
               zero = i;
               break;
           }
       }
       if (zero == -1)  
       {
           return;
       }
       for (int i = zero+1; i<n; i++)
       {
           if (arr[i]!=0)
           {
               swap(arr[i], arr[zero]);
               zero++;
           }
       }
    }
};