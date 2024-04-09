#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    void findSubsets(int ind, vector<int> &ds, vector<vector<int>> &ans, vector<int> &v, int n)
    {
        ans.push_back(ds);
        for(int i = ind; i < v.size(); i++) {
            if(i != n && v[i] == v[i-1]) continue;
            ds.push_back(v[i]);
            findSubsets(ind+1, ds, ans, v, n);
            ds.pop_back();
        }
    }

    public:
    vector<vector<int>> subsetWithDup(vector<int>v, int n) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(v.begin(), v.end());
        findSubsets(0, ds, ans, v, v.size());
        return ans;
    }
};

int main()
{
    vector<int> v = {1, 2, 2};
    Solution obj;
    vector<vector<int>> res = obj.subsetWithDup(v,v.size());
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        } cout << endl;
    }
}