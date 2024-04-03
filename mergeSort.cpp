 #include <bits/stdc++.h>

 using namespace std;

 void merge(vector<int>&v, int low, int mid, int high) {
    vector<int>temp;
    int left = low, right = mid+1;

    while(left <= mid && right <= high) {
        if(v[left] > v[right]) {temp.push_back(v[right]); right++;}
        else {temp.push_back(v[left]); left++;}
    }

    while(left <= mid) {
        temp.push_back(v[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(v[right]);
        right++;
    }

    for(int i = low; i <= high; i++) v[i] = temp[i-low];
 }

 void mergeSort(vector<int>&v, int low, int high) {
    if(low == high) return;

    int mid = (low+high)/2;

    mergeSort(v, low, mid);
    mergeSort(v, mid+1, high);

    merge(v, low, mid, high);

    // Time complexity:  for mergeSort[O(log(n) base 2,)] and for merge(O(n)) so total time O(n*log(n)).
    // Auxilary Space complexity: O(n)
 }

 int main() {
    vector<int> v = {1, 5, 2, 4, 3};
    for(auto it: v) cout << it << " ";
    cout << endl;
    mergeSort(v, 0, v.size()-1);
    for(auto it: v) cout << it << " ";
 }