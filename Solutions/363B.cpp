#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += h[i];
    }
    int mn = sum;
    int idx = 1;
    for (int i = k; i < n; i++) {
        sum -= h[i-k];
        sum += h[i];
        if (sum < mn) {
            mn = sum;
            idx = i + 1 - k + 1;
        }
    }
    cout << idx;
}