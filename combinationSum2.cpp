 #include <bits/stdc++.h>

 using namespace std;

 class Solution {
    private:
    void findCombination(int ind, int target, vector<int>&candidates, vector<int>&ds, vector<vector<int>>&ans) {
        if(target == 0) {
            ans.push_back(ds);
            return;
        }
        for(int i = ind; i < candidates.size(); i++) {
            if(i > ind && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            ds.push_back(candidates[i]);
            findCombination(ind+1, target-candidates[i], candidates, ds, ans);
            ds.pop_back();
        }
    }

    public:
    vector<vector<int>>combinationSum2(vector<int>&candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ds, ans);
        return ans;
    }
 };

 int main() {
    vector<int> v = {1, 1, 1, 2, 2};
    int sum = 4;
    // Perform the combination sum so that the lexographical order of the
    // combination will remain maintained i.e in sorted order 
    // Each number in candidate key may only used once in the combination.
    // Array will be sorted or you can sort it.
    // Time complexity : 2^n * k, aux space complexity: K * X IF ignoring stack space by recursion
    Solution obj;
    // Calling combinationSum2 function
    vector<vector<int>>ans;
    ans = obj.combinationSum2(v, sum);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
 }