#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    // vector<int> c;
    // vector<int> cpos;
    while (t--) {
        long long n;
        cin >> n;
        long long tt=0;
        for (int i = 1; i <= 9; i++) {
            long long bs = i;
            while (bs <= n) {
                tt++;
                bs *= 10;
                bs += i;
            }
        }
        cout << tt << '\n';
    }
}