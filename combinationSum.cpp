#include <bits/stdc++.h>

using namespace std;

void combinationSum(int ind, vector<int> &v, int sum, vector<vector<int>> &ans, vector<int>&ds)
{
    // We can take a array element any number of time to make target and then print the subsequence basically.
    // Time complexity: O(2^t * k) and aux space : k * x(combinations)

    if(ind == v.size()) {
        if(sum == 0) {
            ans.push_back(ds);
        }
        return;
    }

    // Pick up the element
    if(v[ind] <= sum) {
        ds.push_back(v[ind]);
        combinationSum(ind, v, sum-v[ind], ans, ds);
        ds.pop_back();
    }

    combinationSum(ind+1, v, sum, ans, ds);
}

int main()
{
    vector<int> v = {2, 3, 6, 7};
    int sum = 7;
    vector<vector<int>> ans;
    vector<int>ds;
    combinationSum(0, v, sum, ans, ds);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        } cout << endl;
    }

}