#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int px=0, py=0;
        int ans = 0;
        int x, y;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            // int score=0;
            if ((x + 2 - px)%2 != (y + 2 - py)%2) {ans--;}
            // if ((x - px)%2 != (y - py)%2) score++;
            // if (score == 1) cout << px << ' ' << x << '\n' << py << ' ' << y << '\n' << (x + 2 - px)%2 << '\n' << (y + 2 - py)%2 << endl;
            // cout << ((-3)%2) << '\n';
            ans += x-px;
            px = x; py = y;
        }
        cout << (ans+m-x) << endl;
    }
}