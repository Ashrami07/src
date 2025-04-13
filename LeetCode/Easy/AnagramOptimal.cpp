#include<string>
#include <vector>
using namespace std;

bool areAnagrams(string& s1, string& s2) {
        int lenS1 = s1.length();
        int lenS2 = s2.length();
        if (lenS1 != lenS2)
        {
            return false;
        }
        vector<char> chararr(26,0);
        for (int i=0;i<lenS1; i++)
        {
            chararr[s1[i]-'a']++;
            chararr[s2[i]-'a']--;
        }
        for (int i=0; i<chararr.size();i++)
        {
            if (chararr[i]!=0)
            {
                return false;
            }
        }
        return true;
    }