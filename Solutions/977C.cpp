#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    if (k == 0) {
        if (a[0] == 1) {
            cout << "-1";
        } else 
            cout << 1;
        return 0;
    }
    if (mp[a[k-1]] > 1 && (k != n && a[k] == a[k-1])) {
        cout << "-1";
    } else {
        cout << a[k-1];
    }
}