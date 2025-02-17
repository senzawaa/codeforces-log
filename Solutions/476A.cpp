#include<iostream>
// #include<unordered_map>
using namespace std;
int main() {
    // unordered_map<int, int> steps;
    int n, m;
    cin >> n >> m;
    int s1 = n%2;
    int s2 = n/2;
    bool ok = 0;
    while ((s1 + s2) <= n) {
        if ((s1 + s2) % m == 0) {
            cout << (s1 + s2) << '\n';
            ok = 1;
            break;
        }
        s1 += 2;
        s2--;
    }
    if (!ok) {
        cout << "-1\n";
    }
}