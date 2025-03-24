#include<iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    cout << (n > m || n > k ? "NO\n" : "YES\n");
}