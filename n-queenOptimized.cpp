 #include <bits/stdc++.h>

 using namespace std;
 
 class Solution {
    private:
    void solve(int col, vector<string>&board, vector<vector<string>>&ans,
       vector<int>&leftRow , vector<int>&lowerDiagonal, vector<int>&upperDiagonal, int n) {
        if(col == n) {
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++) {
            if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 
            && upperDiagonal[n-1 + col - row] == 0 ) {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row+col] = 1;
                upperDiagonal[n-1 + col - row] = 1;
                solve(col+1,board,ans,leftRow,lowerDiagonal,upperDiagonal,n);
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row+col] = 0;
                upperDiagonal[n-1 + col - row] = 0;
            }
        }
    }
    public:
    vector<vector<string>> soveNQueen(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i < n; i++) {
            board[i] = s;
        }
        vector<int>leftRow(n), upperDiagonal(2*n - 1), lowerDiagonal(2*n - 1);
        solve(0, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
        return ans;
    }
 };

 int main() {
    int n = 4;
    Solution obj;
    vector<vector<string>> ans = obj.soveNQueen(n);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " " << endl;
        }
        cout << endl;
    }
 }