#include<iostream>
using namespace std;
void chmx(int &a, int b) {a=max(a,b);}
int main() {
    int n;
    cin >> n;
    int mx = -1;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = (i == 0 || j == 0 ? 1 : (a[i-1][j] + a[i][j-1]));
            chmx(mx, a[i][j]);
        }
    }
    cout << mx;
}