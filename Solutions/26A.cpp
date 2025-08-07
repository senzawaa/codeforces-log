
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        int cnt = 0;
        for (int prime = 2; prime * prime <= num; prime++) {
            if (num % prime == 0) {
                cnt++;
                while (num % prime == 0) {
                    num /= prime;
                }
            }
        }
        if (num > 1) {
            cnt++;
        }
        if (cnt == 2) {
            ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}