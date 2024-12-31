#include<iostream>
#include<vector>
// #include<numeric>
using namespace std;
int main() {
    int n, g;
    cin >> n;
    vector<int> s(4, 0);
    for(int idx = 0; idx < n; idx++) {
        cin >> g;
        s[g-1]++;
    }
    int a = s[3] + s[1] / 2;
    s[3] = 0;
    s[1] %= 2;
    // {s[0], 0 or 1, s[2], 0}, s[2] can only be paired with none or 1
    a += s[2];
    s[0] -= s[2];
    s[2] = 0;
    // {s[0] - s[2], 0 or 1, 0, 0}, if s[0] is positive, 1s is more than 3s, vice versa.
    if (s[1] > 0) {
        a++;
        s[1] = 0;
        s[0] -= 2;
    }
    if (s[0] < 0) s[0] = 0;
    a += s[0] / 4 + (s[0] % 4 > 0);
    cout << a;
}