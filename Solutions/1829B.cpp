#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int curr=0, mx=0;
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            switch(a) {
                case 0:
                    curr++;
                    break;
                case 1:
                    mx = max(curr, mx);
                    curr = 0;
                    break;
            }
        }
        mx = max(curr, mx);
        cout << mx << '\n';
    }
}