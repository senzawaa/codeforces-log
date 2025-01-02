#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ns;
    int ooe[2] = {0, 0}; // odd or even [0] even, [1] odd
    int pos[2] = {0, 0};
    for (int idx = 0; idx < n; idx++) {
        cin >> ns;
        ooe[ns % 2]++;
        pos[ns % 2] = idx;
    }
    for (int idx = 0; idx < 2; idx++) if (ooe[idx] == 1) cout << pos[idx] + 1;
    return 0;
}