#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 0) {
        cout << n;
    } else {
        cout << max((n / 100 * 10) + (n % 10), n / 10);
    }
}