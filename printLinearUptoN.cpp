#include <iostream>

using namespace std;

void LinearCount(int flag, int n) {
    if(flag > n) return;
    cout << flag << " ";
    LinearCount(flag+1, n);
}

int main() {
    int N;
    cout << "Enter the upper limit: ";
    cin >> N;
    LinearCount(1, N);
}