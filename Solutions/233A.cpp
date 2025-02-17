#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n&1) {
        cout << "-1";
        return 0;
    }
    vector<int> p;
    for (int i = 0; i < n; i++) {
        p.push_back(i+1);
    }
    for (int i = 0; i < n; i += 2) {
        swap(p[i], p[i+1]);
    }
    for (auto nn : p) {
        cout << nn << ' ';
    }
}