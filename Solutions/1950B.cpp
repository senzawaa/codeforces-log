#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char tile[2][3] = {"..", "##"};
        for (int i = 1; i <= 2*n; i++) {
            if (i & 1) {
                swap(tile[0], tile[1]);
            }
            for (int j = 0; j < n; j++) {
                cout << tile[j&1];
            }
            cout << '\n';
        }
    }
}