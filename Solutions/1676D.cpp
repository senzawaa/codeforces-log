#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
void negslope(vector<vector<int>> a, int x, int y, vector<vector<int>> &rt) {
    int score = 0;
    for (int i = 1; i <= min(x, y); i++) {
        score += a[x-i][y-i];
    }
    for (int i = 1; i < min(n-x, m-y); i++) {
        score += a[x+i][y+i];
    }
    score += a[x][y];
    for (int i = 1; i <= min(x, y); i++) {
        rt[x-i][y-i] += score;
    }
    for (int i = 1; i < min(n-x, m-y); i++) {
        rt[x+i][y+i] += score;
    }
    rt[x][y] += score;
}
void posslope(vector<vector<int>> a, int x, int y, vector<vector<int>> &rt) {
    int score = 0;
    for (int i = 1; i <= min(x, m-y-1); i++) {
        score += a[x-i][y+i];
    }
    for (int i = 1; i < min(n-x, y+1); i++) {
        score += a[x+i][y-i];
    }
    score += a[x][y];
    for (int i = 1; i <= min(x, m-y-1); i++) {
        rt[x-i][y+i] += score;
    }
    for (int i = 1; i < min(n-x, y + 1); i++) {
        rt[x+i][y-i] += score;
    }
    rt[x][y] += score;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> tot(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                tot[i][j] = -a[i][j];
            }
        int mx = -1;
        for (int i = 0; i < m; i++) {
            negslope(a, 0, i, tot);
            posslope(a, 0, i, tot);
        }
        for (int y = 1; y < n; y++) {
            negslope(a, y, 0, tot);
            posslope(a, y, m-1, tot);
        }
        for (auto vc : tot) {
            mx = max(mx, *max_element(vc.begin(), vc.end()));
        }
        cout << mx << endl;
    }
}