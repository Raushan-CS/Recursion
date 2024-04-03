 #include <bits/stdc++.h>

 using namespace std;

 void printReverseBacktracking(int flag, int n) {
    if(flag > n) return;

    printReverseBacktracking(flag+1, n);
    cout << flag << " ";
 }

 int main() {
    int n;
    cout << "Enter the N: ";
    cin >> n;
    printReverseBacktracking(1, n); // N, N-1, ... 3,2,1.
 }