#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long sum = a + b + c + n;
        long long mx = max({a,b,c});
        if (sum % 3 == 0 && mx <= sum / 3) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}