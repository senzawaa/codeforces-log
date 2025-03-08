#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    int sm = 0;
    bool ok = 0;
    int i=0;
    while (sm < k && ++i) {
        if (a.size() == 0) {
            cout << "-1"; ok = 1;
            break;
        }
        auto mx = max_element(a.begin(), a.end());
        sm += *mx;
        a.erase(mx);
    }
    if (!ok) {
        cout << i << '\n';
    }

}