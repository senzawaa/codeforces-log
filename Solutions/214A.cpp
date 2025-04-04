#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int s = 0;
    for (int a = 0; a <= max(n, m); a++) {
        for (int b = 0; b <= max(n, m); b++) {
            if ((a * a + b) == n && (b * b + a) == m) {
                s++;
            }
        }
    }
    cout << s;
}