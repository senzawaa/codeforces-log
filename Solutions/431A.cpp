#include<iostream>
#define int long long
#define ll long long
using namespace std;
int main() {
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int sm=0;
    for (char n : s) {
        sm += a[n-'1'];
    }
    cout << sm;
}