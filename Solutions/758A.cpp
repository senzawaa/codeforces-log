#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int mx=-1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += mx - a[i];
    cout << sum;
}