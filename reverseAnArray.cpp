 #include <bits/stdc++.h>

 using namespace std;

 void reverse(int arr[], int start, int n) {
    if(start >= n/2) return;
    swap(arr[start], arr[n-start-1]);
    reverse(arr, start+1, n);
 }

 void reverseVector(vector<int>&v, int i) {
    if(i >= v.size()/2) return;
    swap(v[i], v[v.size()-i-1]);
    reverseVector(v, i+1);
 }

 void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
 }

 int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements for array to reverse it: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    reverse(arr, 0, n);

    cout << "Reversed array is: ";
    for(auto i : arr) cout << i << " ";

    cout << endl << "Vector reverse now:-" << endl;
    cout << "Enter the size of vector: ";
    int m;
    cin >> m;
    vector<int>v;
    cout << "Enter the elements of vector to reverse it: ";
    for(int i = 0; i < m; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    reverseVector(v, 0);
    for(auto i : v) cout << i << " ";
    
    return 0;
 }