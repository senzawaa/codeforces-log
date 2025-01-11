#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n[3];
        for (int i = 0;i<3;i++) cin >> n[i];
        sort(n, n+3);
        cout << n[1] << '\n';
    }
}