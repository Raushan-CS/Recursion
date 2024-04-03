 #include <bits/stdc++.h>

 using namespace std;

// Simple code.
 bool isPalindrome(string str) {
    int n = str.size();
    bool flag = true;
    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-i-1]) return false;
    }
    return true;
 }

//  Recursion Code (functional recursive function)
 bool checkPalindrome(string str, int i) {
    int n = str.size();
    if(i >= n/2) return true;

    if(str[i] != str[n-i-1]) return false;
    return checkPalindrome(str, i+1);
 }
//  Time Complexity: O(n/2) and auxialry space: O(n/2).

 int main() {
    string str;
    cout << "Enter the string to check palindrome: ";
    cin >> str;
    // bool ans = isPalindrome(str);
    bool ans = checkPalindrome(str, 0);
    if(ans) cout << "Yes it is.";
    else cout << "No it's not a palindrome.";
 }