#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int base_sum = 0;
        int count0 = 0, count1 = 0, count2 = 0;
        for (int x : a) {
            base_sum += x;
            if (x == 0) count0++;
            else if (x == 1) count1++;
            else count2++;
        }
        
        if (s < base_sum) {
            // s < base_sum: Bob wins - Alice's minimum sum > s
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++) {
                cout << a[i];
                if (i < n-1) cout << " ";
            }
            cout << "\n";
        } else if (s == base_sum) {
            // s = base_sum: Alice wins - direct path gives exactly s
            cout << -1 << "\n";
        } else {
            // s > base_sum: check if d = s - base_sum
            int d = s - base_sum;
            if (d == 1) {
                // d = 1: Bob wins if he can prevent adjacent (0,1) pairs
                // Need to separate 0s and 1s using 2s as barriers
                // Pattern: [0s][2s][1s] or [1s][2s][0s]
                if (count2 >= abs(count0 - count1) - 1) {
                    vector<int> result;
                    // Place all 0s, then all 2s, then all 1s
                    for (int i = 0; i < count0; i++) result.push_back(0);
                    for (int i = 0; i < count2; i++) result.push_back(2);
                    for (int i = 0; i < count1; i++) result.push_back(1);
                    
                    for (int i = 0; i < n; i++) {
                        cout << result[i];
                        if (i < n-1) cout << " ";
                    }
                    cout << "\n";
                } else {
                    cout << -1 << "\n";
                }
            } else {
                // d != 1: Alice always wins
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}