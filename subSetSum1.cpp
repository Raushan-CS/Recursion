 #include <bits/stdc++.h>

 using namespace std;

 class Solution {
    private:
    void subsetSum(int ind, int sum, vector<int>&v, int N, vector<int> &ds) {
        if(ind == N) {
            ds.push_back(sum);
            return;
        }

        // Pick the element
        subsetSum(ind+1, sum + v[ind], v, N, ds);
        
        //Don't pick the element
        subsetSum(ind+1, sum, v, N, ds);
    }

    public:
    vector<int>ans(vector<int>&v, int N) {
        vector<int> sumSubset;
        subsetSum(0, 0, v, N, sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
 };

 int main() {
    vector<int>v = {3, 1, 4};
    Solution obj;
    vector<int>ans = obj.ans(v, v.size());
    for(auto it: ans) cout << it << " ";
    cout << endl;
 }