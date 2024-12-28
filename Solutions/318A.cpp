#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    // vector<int> nm;
    // for (int i = 1; i >= 0; i--) {
    //     for (int idx = i; idx <= n; idx += 2) {
    //         nm.push_back(idx);
    //     }
    // }
    // cout << nm[k-1];
    bool odd = true;
    if (k > (n/2 + n % 2)) {
        k = k - (n/2 + n % 2);
        odd = false;
    }
    cout << k * 2 - odd;
}