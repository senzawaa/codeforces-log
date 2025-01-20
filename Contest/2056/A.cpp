#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int fx, fy;
        cin >> fx >> fy;
        int peri = 4 * m * n;
        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin >> x >> y;
            peri -= 2 * (m-x + m-y);
        }
        cout << peri << '\n';
    }
}