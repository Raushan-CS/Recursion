 #include <bits/stdc++.h>

 using namespace std;

 void printS(int ind, vector<int>&ds, int k, int sum, int arr[], int n) {
    if(n == ind) {
        if(k == sum) {
            for(auto it: ds) cout << it << " ";
             cout << endl;
        } return;
    }

    ds.push_back(arr[ind]);
    k += arr[ind];
    printS(ind+1, ds, k, sum, arr, n);

    k-=arr[ind];
    ds.pop_back();
    printS(ind+1, ds, k, sum, arr, n);

 }

 int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    printS(0, ds, 0, sum, arr, n);
 }