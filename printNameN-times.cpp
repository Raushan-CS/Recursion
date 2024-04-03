 #include <bits/stdc++.h>

 using namespace std;

 void printName(int flag, int n) {
    if(flag > n) return;
    cout << "Raushan\n";
    printName(flag+1, n);
 }

 int main() {
    int n;
    cout << "Enter the count of names call: ";
    cin >> n;
    printName(1, n);
 }

 // Time Complexity: O(N)
 // Stack Space: O(N)