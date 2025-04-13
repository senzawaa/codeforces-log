#include<iostream>
#include<set>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, tt;
        cin >> n;
        set<int> s;
        for (int i = 0 ; i < n ; i++) {
            cin >> tt;
            s.insert(tt);
        }
        cout << s.size() << '\n';
    }
}