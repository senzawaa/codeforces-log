#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char A, B;
        cin >> A >> B;
        cout << (A-'0') + (B-'0') << '\n';
    }
}