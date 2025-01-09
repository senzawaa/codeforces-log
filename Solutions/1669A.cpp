#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int divs[4][2] = {{-5000, 1399}, {1400, 1599}, {1600, 1899}, {1900, 5000}};
    while (t--) {
        int r;
        cin >> r;
        for (int i = 0; i < 4; ++i) {
            if (divs[i][0] <= r && r <= divs[i][1])
                cout << "Division " << 4 - i << '\n';
        }
    }
}