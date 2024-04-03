 #include <bits/stdc++.h>

 using namespace std;

 int partition(vector<int>&v, int low, int high) {
    int pivot = v[low];
    int i = low, j = high;

    while(i < j) {
        while(v[i] <= pivot && i <= high-1) {
            i++;
        }
        while(v[j] > pivot && j >= low+1) {
            j--;
        }
        if(i < j) swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
 }

 void quicksort(vector<int> &v, int low, int high) {
    if(low < high) {    
    int p = partition(v, low, high);
    quicksort(v, low, p-1);
    quicksort(v, p+1, high);
    }
 }

 int main() {
    cout << endl;
    vector<int>v = {4, 6, 2, 5, 7, 9, 1, 3};
    for(auto it: v) cout << it << " ";
    cout << endl;

    quicksort(v, 0, v.size()-1); // TIme complexity : N(log(N)).
    // Space complexity: 1 not taking recursion stack space.
    for(auto it: v) cout << it << " ";
    cout << endl;

    return 0;
 }