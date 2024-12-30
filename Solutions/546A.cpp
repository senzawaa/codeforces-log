#include<iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    for (int idx = 0; idx < w; idx++) {
        total += (idx+1) * k;
    }
    cout << ((total > n) ? total - n : 0);
}