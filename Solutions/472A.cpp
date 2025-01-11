#include<iostream>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; (i*i) <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int l = n / 2, r = n / 2 + (n % 2);
    while (isPrime(l) || isPrime(r)) {
        l--;
        r++;
    }
    cout << l << ' ' << r;
}