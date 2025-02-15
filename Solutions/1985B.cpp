#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mx[2] = {-1, 0};
        for (int x = 2; x <= n; x++) {
            int k = n/x;
            int s = ((1+k)*k)/2 * x;
            if (s > mx[0]) {
                mx[0] = s;
                mx[1] = x;
            }
        }
        cout << mx[1] << '\n';
    }
}