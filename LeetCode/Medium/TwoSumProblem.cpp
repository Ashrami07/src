// #include <bits/stdc++.h>
#include<iostream>
#include <vector>
#include <set>
#include <utility>
#include <map>
#include <sstream>

using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};
//used hash array to store the indexed such that if rem = k-a[i]. we check if rem is present in the array.
// If present then we insert it into set else if not present the we store the current value and its index so this could come handy.
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n = arr.size();
        int k = 0;
        vector<vector<int>> v;
        set <pair<int,int>>s;
        map <int, int> mp;
        for (int i=0; i<n; i ++)
        {
            int rem = k-arr[i];
            if (mp.find(rem)!=mp.end())
            {
                if (rem<arr[i])
                {
                    s.insert({rem,arr[i]});
                } else {
                    s.insert({arr[i],rem});
                }
            }
            else
            {
                mp[arr[i]]=i;
            }
        }
        for (auto x :s)
        {
            v.push_back({x.first,x.second});
        }
        return v;
    }
};

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        // char c;cin>>c;
        Solution obj;
        vector<vector<int>> res = obj.getPairs(arr);
        if (res.size() == 0) {
            cout << endl;
        } else
            Matrix::print(res);
        cout << "~" << endl;
    }
}