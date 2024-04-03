 #include <iostream>

 using namespace std;

 void printLinearReverse(int flag, int n) {
    if(flag < 1) return;
    cout << flag << " ";
    printLinearReverse(flag-1, n);
 }

 int main() {
    int n;
    cout << "Enter the N: ";
    cin >> n;
    printLinearReverse(n, n);
 }