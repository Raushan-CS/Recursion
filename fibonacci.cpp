 #include <bits/stdc++.h>
 
 using namespace std;

 int printFibonacci(int n) {
    if(n == 0 ) return 0;
    else if(n == 1) return 1;
    else return printFibonacci(n-1) + printFibonacci(n-2);
 }

 int main() {
    int n;
    cout << "Enter a number to print the fibonaccci number: ";
    cin >> n;
    cout << printFibonacci(n);
 }