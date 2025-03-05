#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> factor;
    for (int i = 1; (i * i) <= x; i++) {
        if (x % i == 0) {
            factor.push_back(i);
            if (i*i != x) 
                factor.push_back(x / i);
        }
    }
    int sm = 0;
    for (auto fac : factor) {
        if (fac <= n && (x / fac) <= n) {
            sm++;
        }
    }
    cout << sm;
}