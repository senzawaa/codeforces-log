#include<iostream>
#define int long long
using namespace std;
signed main() {
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		int a, b;
		cin >> a >> b;
		int c = 1e18;
		int d = abs(x - y) * a + min(x, y) * b;
		int e = (x + y) * a;
		cout << min(c, min(d, e)) << '\n';
	}
}