#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
      int mini = INT_MAX;
    int i = 0; int j = m-1;
    while(j<a.size()){
        int diff = a[j++] - a[i++];
        mini = min(mini, diff);
    }
    return mini;
    }   
};
