#include<iostream>
using namespace std;
const char *ori = "codeforces";
int main() {
    int t;
    cin >> t;
    while (t--) {
        char input[11];
        input[10] = '\0';
        int sm = 0;
        for (int i = 0; i < 10; i++) {
            cin >> input[i];
            sm += (input[i] != ori[i]);
        }
        cout << sm << '\n';
    }
}