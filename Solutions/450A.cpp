#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n, 0);
    vector<int> ord;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ord.push_back(i+1);
    }
    int c=0;
    while (b.size() != 1) {
        *b.begin() += m;
        if (*b.begin() < *a.begin()) {
            a.push_back(*a.begin());
            a.erase(a.begin());
            b.push_back(*b.begin());
            b.erase(b.begin());
            ord.push_back(*ord.begin());
            ord.erase(ord.begin());
        } else {
            a.erase(a.begin());
            b.erase(b.begin());
            ord.erase(ord.begin());
        }
    }
    cout << ord[0] << '\n';
}