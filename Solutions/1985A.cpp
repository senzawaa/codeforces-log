#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        char a[4], b[4];
        for (auto &alloc : {a, b}) {
            for (int i = 0; i < 3; i++)
                cin >> alloc[i];
            alloc[3] = '\0';
        }
        swap(a[0], b[0]);
        cout << a << ' ' << b << '\n';
    }
}