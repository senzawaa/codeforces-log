#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int idx = 1; idx <= n; idx++) {
        if (idx % 2) cout << "I hate ";
        else cout << "I love ";
        if (idx != n) cout << "that ";
    }
    cout << "it";
}