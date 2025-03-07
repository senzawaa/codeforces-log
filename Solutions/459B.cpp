#include<iostream>
#include<unordered_map>
#define map unordered_map
#include<algorithm>
using namespace std;
long long fact(long long n) {
    if (n == 1) return 1;
    return n * fact(n-1);
}
int main() {
    int n;
    cin >> n;
    int b[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }
    sort(b, b+n);
    cout << (*(b+n-1) - b[0]) << ' ' << (fact(mp[*(b+n-1)]) * fact(mp[b[0]]));
}