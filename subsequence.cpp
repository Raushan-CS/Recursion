 #include <bits/stdc++.h>

 using namespace std;

 void printSubsequence(int ind, vector<int>&ds, int arr[], int n) {
    if(ind == n) {
        for(auto i : ds) {
            cout << i << " ";
        } 
        
        if(ds.size() == 0) cout << "{}";
        
         cout << endl;
        return;
    }

    // Take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printSubsequence(ind+1, ds, arr, n);

    // Not pick, or not take condition, this element is not added to the subsequence.
    ds.pop_back();
    printSubsequence(ind+1, ds, arr, n);
 }

//  Time complexity : O(pow(2,n)) and auxilary space complexity : O(n).
// At max n levels of stack space is required for the recursion call.

 int main() {
    int arr[] = {3,1,2};
    int n = 3;
    vector<int>ds;
    printSubsequence(0, ds, arr, n);
 }