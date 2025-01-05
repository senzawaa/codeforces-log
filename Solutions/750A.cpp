#include<iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int minutes = 4 * 60 - k;
    for (int idx = 0; idx < n; idx++) {
        minutes -= (idx + 1) * 5;
        if (minutes < 0) {
            cout << idx;
            return 0;
        }
    }
    cout << n;
}