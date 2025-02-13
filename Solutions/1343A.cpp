#include<iostream>
#include<math.h>
using namespace std;
int twos[32];
int main() {
    for (int i = 1; i < 32; i++) {
        twos[i-1] = (1<<i) - 1;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (auto i : twos) {
            if (i == 1) continue;
            if (i > n) break;
            if (n % i == 0) {
                cout << (n/i) << '\n';
                break;
            }
        }
    }
}