#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int sum = 0;
    while (x != 0) {
        sum += x & 1;
        x >>= 1;
    }
    cout << sum;
}