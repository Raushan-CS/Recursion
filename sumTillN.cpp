 #include <iostream>

 using namespace std;

 int functionalSum(int n) {
    if(n == 0) return 0;
    return n + functionalSum(n-1);
 }

 void parametrizedSum(int i, int sum) {
    if(i < 1) {
        cout << sum; return;
    }
    parametrizedSum(i - 1, sum + i);
 }

 int main() {
    int n;
    cout << "Enter n: ";
    cin>> n;
    cout << functionalSum(n) << endl;
    parametrizedSum(3, 0);
    cout << endl;
 }