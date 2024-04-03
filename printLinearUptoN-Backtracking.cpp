 #include <bits/stdc++.h>

 using namespace std;

 void printLinearBacktracking(int flag, int n) {
    if(flag < 1) return;

    printLinearBacktracking(flag-1, n);
    cout << flag << " ";
 }

 int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    printLinearBacktracking(n, n);
 }