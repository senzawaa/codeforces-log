#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char grid[8*8];
        for (int i = 0; i < 8*8; i++) {
            cin >> grid[i];
            if (grid[i] != '.') cout << grid[i];
        }
        cout << '\n';
    }
}