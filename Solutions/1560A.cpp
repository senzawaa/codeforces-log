#include<iostream>
#include<vector>
using namespace std;
bool containsThree(int n) {
    // while (n != 0) {
    if (n % 10 == 3)
        return true;
    //     n /= 10;
    // }
    return false;
}
int main() {
    vector<int> cache;
    for (int i = 1; i <= 1666; i++) {
        if (!containsThree(i) && (i % 3 != 0))
            cache.push_back(i);
    }
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << cache[k-1] << '\n';
    }
}