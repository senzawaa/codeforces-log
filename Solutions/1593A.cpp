#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[3];
        for (int i = 0; i < 3; i++) cin >> a[i];
        for (int i = 0; i < 3; i++) {
            int tmp=a[i];
            a[i]=0;
            int mx=*max_element(a, a+3);
            cout << max(mx-tmp+1, 0) << ' ';
            a[i] = tmp;
        }
        cout << '\n';
    }
}