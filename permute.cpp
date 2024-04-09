 #include <bits/stdc++.h>

 using namespace std;

 class Solution {
    private:
    void recurPermute(vector<vector<int>>&ans, vector<int>ds, bool freq[], vector<int>&v) {
        if(ds.size() == v.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < v.size(); i++) {
            if(!freq[i]) {
                ds.push_back(v[i]);
                freq[i] = true;
                recurPermute(ans, ds, freq, v);
                freq[i] = false;
                ds.pop_back();
            }
        }
    }
    public:
    vector<vector<int>> permute(vector<int>&v) {
        vector<vector<int>>ans;
        vector<int>ds;
        bool freq[v.size()] = {false};
        recurPermute(ans, ds, freq, v);
        return ans;
    }
 };

 int main( ) {
    vector<int>v = {1,2,3};
    Solution obj;
    vector<vector<int>> ans = obj.permute(v);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        } cout << endl;
    }
 }