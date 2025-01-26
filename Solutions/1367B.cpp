#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> ooe;
        for (int i =0; i < n; i++) {
            cin >> a[i];
            ooe[a[i] % 2]++;
        }
        if (ooe[0] != (ooe[1] + (n % 2 == 1))) {
            cout << "-1\n";
            continue;
        }
        int sm = 0;
        for (int i = 0; i < n; i++) {
            sm += ((i % 2) != (a[i] % 2));
        }
        cout << (sm / 2) << '\n';
    }
}