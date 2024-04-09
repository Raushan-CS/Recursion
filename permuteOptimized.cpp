 #include <bits/stdc++.h>

 using namespace std;

 class Solution {
    private:
    void recurPermute(int ind, vector<int>&v, vector<vector<int>>&ans) {
        if(ind == v.size()) {
            // insert v into ds
            ans.push_back(v);
            return;
        }

        for(int i = ind; i < v.size(); i++) {
            swap(v[i], v[ind]);
            recurPermute(ind+1, v, ans);
            swap(v[i], v[ind]);
        }
    }
    public:
    vector<vector<int>> permute(vector<int>&v) {
        vector<vector<int>>ans;
        recurPermute(0, v, ans);
        return ans;
    }
 };

 int main() {
    vector<int>v = {1, 2, 3};
    Solution obj;
    vector<vector<int>> ans;
    ans = obj.permute(v);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        } cout << endl;
    }
 }