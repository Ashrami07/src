#include<string>
using namespace std;

bool isPalindrome(string& s) {
        int n = s.length();
        int start =0;
        int end = n-1;
        while(start<=end)
        {
            if (s[start]!=s[end])
            {
               return false;
            }
            start++;
            end--;
        }
        return true;
    }