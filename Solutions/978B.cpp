#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char c;
    int curr = 0, sm = 0;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == 'x') curr++;
        else if (c != 'x' && curr > 2) {
            sm += curr - 2;
            curr = 0;
        } else if (c != 'x') curr = 0;
    }
    if (curr > 2)
        sm += curr - 2;
    cout << sm;
}