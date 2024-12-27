#include<iostream>
using namespace std;

int main() {
    int h[30], a[30];
    int n;
    cin >> n;
    for (int idx=0;idx<n;idx++) cin >> h[idx] >> a[idx];
    int count=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (h[i] == a[j]) {
                count++;
            }
        }
    }
    cout << count;
}